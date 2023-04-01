// Implementation of different operations related to stack 

#include<stdio.h>
#include<conio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void display();
int main()
{
	printf("Enter the number of elements in the stack:");
	scanf("%d",&n);
	printf("\n******Stack Operation Using Array******\n");
	while(choice!=4)
	{
		printf("\nChoose one from the below options:");
		printf("\n1.Push \n2.Pop \n3.Display \n4.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{ 
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Exiting.......................");
				break;
			default:
				printf("\nPlease enter valid choice");
		}
	}
	return 0;
}
void push()
{
	int val;
	if(top==n-1)
	printf("\n Overflow");
	else
	{
		printf("Enter a value:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}
void pop()
{
	if(top==-1)
	printf("\nUnderflow");
	else
	{
		printf("Popped element is:%d",stack[top]);
		top=top-1;
	}
}
void display()
{
	printf("\nThe elements of the stack are:\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\t",stack[i]);
	}
	if(top==-1)
	{
		printf("Stack is empty");
	}
}






















