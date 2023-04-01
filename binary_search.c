//7.2 Binary Search
#include<stdio.h>
#include<conio.h>
int BinarySearch(int a[100],int l,int r,int key)
{
	int m;
	int flag=0;
	if(l<=r){
		m=(l+r)/2;
		if(key==a[m])
		flag=m;
		else if(key<a[m])
		return BinarySearch(a,l,m-1,key);
		else
		return BinarySearch(a,m+1,r,key);
	}
	else
	return flag;
}
int main()
{
	int a[100],key,i,n,flag;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter %d data items in sorted form:\n",n);
	for(i=0;i<n;i++){
		printf("Enter %d element:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter the number to search:");
	scanf("%d",&key);
	flag=BinarySearch(a,0,n-1,key);
	if(flag==0)
	printf("Search Unsuccessful.");
	else
	printf("Search successful!\nFound at location %d.",flag+1);
}
