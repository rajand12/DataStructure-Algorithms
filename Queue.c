// Implementation of different operations related to Linear Queue

#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
void Insert_Element();
void Delete_Element();
void Display_Queue();
void Empty_Queue();
int main()
{
	int choice;
	printf("-----Enter your choice-----");
	do
	{
		printf("\n1.Insert an Element");
		printf("\n2.Delete an Element");
		printf("\n3.Display Queue");
		printf("\n4.Empty Queue");
		printf("\n5.Exit");
		printf("\n\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				Insert_Element();
				break;
			case 2:
				Delete_Element();
				break;
			case 3:
				Display_Queue();
				break;
			case 4:
				Empty_Queue();
				break;
			case 5:
				printf("Exiting...\n");
				break;
			default:
				printf("Please enter correct choice");
		}
	}
	while(choice!=5);
	return 0;
}
void Insert_Element()
{
	int n;
	if(rear<max-1)
	{
		if(front==-1)
		front=0;
		printf("Enter the element to be inserted in queue: ");
		scanf("%d",&n);
		queue[++rear]=n;
	}
	else
	printf("Queue is Overflown");
}
void Delete_Element()
{
	int n;
	if(front==-1 || front>rear)
	printf("Queue is Underflown");
	else
		{
			n=queue[front++];
			printf("The element deleted is %d.",n);
		}
}
void Display_Queue()
{
	int i;
	if(front==-1 || front>rear)
	{
		printf("No element to be displayed\n");
	}
	else{
		printf("The elements in queue are:\n");
		for(i=front;i<=rear;i++)
		{
			printf("Element at %d is %d.\n",i,queue[i]);
		}
	}
}
void Empty_Queue()
{
	//Reset queue or creates Empty Queue
	front =-1;
	rear = -1;
	printf("\nNew Queue created successfully.\n");
}
