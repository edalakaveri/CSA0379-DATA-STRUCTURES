#include<stdio.h>
int main()
{
	int a[50];
	int i,n;
	printf("enter a number:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter any number for %d:",i+1);
		scanf("%d",&a[i]);
	}
	for( i=0;i<n;i++)
	{
		if(i==4)
		printf("5 th iterated element is %d:",a[i]);
	}
}
	
	
