#include<stdio.h>
int main()
{
	int a[10000],i,n,key;
	printf("enter elements of array:");
	scanf("%d",&n);
	printf("enter element in array:");
	for(i=0;i<n;i++) 
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			printf("element found");
			return 0;
		}
	}
	printf("elements not found");
}
