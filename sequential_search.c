//Lab7.1 Sequential Seearch
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],key,i,n;
	printf("Enter the number of elements in array:");
	scanf("%d",&n);
	printf("Enter %d number.\n",n);
	for(i=0;i<n;i++){
		printf("Enter %d element:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search:");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(a[i]==key){
			printf("%d is present at location %d.\n",key,i+1);
			break;
		}
	}
	if(i==n)
	printf("%d isn't present in an array.\n",key);
	return 0;
}
 