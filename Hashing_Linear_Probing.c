//Implementation of Hashing using linear probing.

#include<stdio.h>
#include<stdlib.h>
#define TABLE_SIZE 10
int h[TABLE_SIZE]={NULL};
void insert()
{
	int key,index,i,flag=0,hkey;
	printf("\nEnter a value to insert into hash table:");
	scanf("%d",&key);
	hkey=key%TABLE_SIZE;
	for(i=0;i<TABLE_SIZE;i++)
	{
		index=(hkey+i)%TABLE_SIZE;
		if(h[index]==NULL)
		{
			h[index]=key;
			break;
		}
	}
	if(i==TABLE_SIZE)
	printf("\nElement cannot be inserted");
}
void search()
{
	int key,index,i,flag=0,hkey=0;
	printf("\nEnter search element");
	scanf("%d",&key);
	hkey=key%TABLE_SIZE;
	for(i=0;i<TABLE_SIZE;i++)
	{
		index=(hkey+i)%TABLE_SIZE;
		if(h[index]==key)
		{
			printf("Value is found at index %d",index);
			break;
		}
	}
	if(i==TABLE_SIZE)
	printf("\nElement cannot be found");	
}
void display()
{
	int i;
	printf("\nElements in the hash table are:\n");
	for(i=0;i<TABLE_SIZE;i++)
	printf("\nAt index %d\t Value=%d",i,h[i]);
}
int main()
{
	int opt,i;
	while(1)
	{
		printf("\nPress \t1.Insert \t2.Display\t3.Search\t4.Exit\n");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				search();
			case 4:
				exit(0);
		}
	}
	return 0;
}
