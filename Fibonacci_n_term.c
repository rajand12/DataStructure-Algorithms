//Write a program to find nth term of fibonacci series using recursive function.

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	int fibo();
	printf("Enter the term you want to find: ");
	scanf("%d",&n);
	printf("nth term of Fibonacci Series is: ");
	printf("%d",fibo(n));
	getch();
	return 0;
}
int fibo(int k)
{
	if(k==0||k==1)
	return k;
	else
	return (fibo(k-1)+fibo(k-2));
}
