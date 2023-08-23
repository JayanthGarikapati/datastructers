#include<stdio.h>

#include<stdlib.h>
#define SIZE 4
int top =-1,inp_array[SIZE];
void push();
void pop();
void show();
void end();
int main()
{
	
	int choice;

	while(1)
	{
	
		printf("\nperform operation on the stack: ");
		printf("\n1.push\n2.pop\n3.show\n4.end");
		printf("\nenter the choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				push();
				break;
			case 2:
			     pop();
			     break;
			case 3:
			     show();
				 break;
		    case 4:
			     end();
			default:
			    printf("\n invalid choice!!");
					 
				    
				
		}
	}
	
}
void push()
{
	int x;
	if(top==SIZE-1)
	{
		printf("\nover flow");
		}	
	else
	{
		printf("\nenter the element to be added on to the stack: ");
		scanf("%d",&x);
		top=top+1;
		inp_array[top]=x;
		
		}	
}
void pop()
{
	if(top==-1)
	{
		printf("\n under flow");
		
	}
	else
	{
	
	    printf("\npopped element:%d",inp_array[top]);
	    top=-1;
	}
}
void show()
{
	if(top==-1)
	{
		printf("\nunder flow!!");
		
	}
	else
	{
		printf("\nelement preasent in the stack: ");
		for(int i = top;i>0;--i)
		printf("%d\n",inp_array[i]);
	}

}
