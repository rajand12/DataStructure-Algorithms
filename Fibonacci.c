//Program to generate fibonacci series up to n terms using recursive function.

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i;
	int fibo();
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("Fobonacci series upto %dth terms: ",n);
	for(i=0;i<=n;i++)
	printf("%d\t",fibo(i));
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
