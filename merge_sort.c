//Implementation of merge sort

#include<stdio.h>
#include<conio.h>
void merge(int a[], int l, int m,int r)
{
	int x=l;
	int k=l,i;
	int b[10];
	int y=m;
	while(x<m && y<=r)
	{
		if(a[x]<a[y])
		{
			b[k]=a[x];
			k++;
			x++;
		}
		else
		{
			b[k]=a[y];
			k++;
			y++;
		}
	}
	while(x<m)
	{
		b[k]=a[x];
		k++;
		x++;
	}
	while(y<=r)
	{
		b[k]=a[y];
		k++;
		y++;
	}
	for(i=l;i<=r;i++)
	a[i]=b[i];
}
void merge_sort(int a[],int l,int r)
{
	int mid;
	if(l<r)
	{
		mid =(l+r)/2;
		merge_sort(a,l,mid);
		merge_sort(a,mid+1,r);
		merge(a,l,mid+1,r);
	}
}
int main()
{
	int a[100],n,i,l,r;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter %d elements:\n",n);
	l=0;
	r=n-1;
	for(i=0;i<n;i++)
	{
		printf("Enter %d elements: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nElememts before sort:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	merge_sort(a,l,r);
	printf("\n\nElements after sort\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}

