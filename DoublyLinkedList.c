//Implementation of different operations related to doubly linked list.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *prev;
	struct node *next;
};
typedef struct node NodeType;
NodeType *first=NULL;
NodeType *last=NULL;
void create(int el)
{
	NodeType *Newnode;
	Newnode=(NodeType*)malloc(sizeof(NodeType));
	Newnode->info=el;
	Newnode->prev=Newnode->next=NULL;
	if(first==NULL)
	{
		first=Newnode;
		last=Newnode;
	}
	else
	{
		last->next=Newnode;
		Newnode->prev=last;
		last=Newnode;
	}
}
void insertbeg(int el)
{
	NodeType *Newnode;
	Newnode= (NodeType*)malloc(sizeof(NodeType));
	Newnode->info=el;
	Newnode->prev=Newnode->next=NULL;
	if(first==NULL)
	{
		first=Newnode;
		last=Newnode;
	}
	else
	{
		Newnode->next=first;
		first->prev=Newnode;
		first=Newnode;
	}
}
void insertEnd(int el)
{
	NodeType *Newnode;
	Newnode = (NodeType*)malloc(sizeof(NodeType));
	Newnode->info=el;
	Newnode->prev=Newnode->next=NULL;
	if(first==NULL)
	{
		first=Newnode;
		last=Newnode;
	}
	else
	{
		last->next=Newnode;
		Newnode->prev=last;
		last=Newnode;
	}
}
void DeleteFirst()
{
	NodeType *temp;
	temp = first;
	if(first==NULL)
	{
		printf("Empty Linked List");
	}
	else if(first==last)
	{
		first=NULL;
		last=NULL;
		free(temp);
	}
	else
	{
		first=first->next;
		free(temp);
	}
}
void DeleteLast()
{
	NodeType *temp, *hold;
	temp=first;
	if(last==NULL)
	{
		printf("Empty Linked List");
	}
	else if(first==last)
	{
		first=NULL;
		last=NULL;
		free(temp);
	}
	else
	{
		temp=first;
		while(temp->next!=last)
		{
			temp=temp->next;	
		}
		hold=temp->	next;
		temp->next=NULL;
		last=temp;
		free(hold);	
	}
}
void Display()
{
	NodeType *temp;
	temp=first;
	if(first==NULL)
	printf("Empty L:inked List");
	else
	{
		while(temp!=last)
		{
			printf("%d\t",temp->info);
			temp=temp->next;
		}
		printf("%d",last->info);
	}
}
int main()
{
	int choice;
	int item;
	printf("Menu for Doubly Linked List\n");
	printf("\n1.Create a doubly linked list");
	printf("\n2.Insert at beginning");
	printf("\n3.Insert at last");
	printf("\n4.Delete first node");
	printf("\n5.Delete last node");
	printf("\n6.Display");
	printf("\n7.Exit");
	do
	{
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the data item to be inserted: ");
				scanf("%d",&item);
				create(item);
				break;
			case 2:
				printf("Enter data item to be inserted: ");
				scanf("%d",&item);
				insertbeg(item);
				break;
			case 3:
				printf("Enter data item to be inserted: ");
				scanf("%d",&item);
				insertEnd(item);
				break;
			case 4:
				DeleteFirst();
				break;
			case 5:
				DeleteLast();
				break;
			case 6:
				Display();
				break;
			case 7:
				printf("\nExiting...");
				exit(0);
			default:
				printf("Invalid Choice Please enter correct choice");
		}
	}
	while(choice<8);
	return 0;
}

