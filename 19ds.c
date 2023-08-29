#include<stdio.h>
void main()
{
	int arr={1,2,3};
	int a[50];
	int n,i=0,j=0,c;
	printf("enter any num:\n");
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		printf("enter any num for %d:\n",j+1);
		scanf("%d",&a[j]);
	}
	int b=a[0];
	int k=a[1];
	for(i=0;i<n;i++)
	{
		for(j=b+1;j<c;j++)
		{
			printf("missing elements:%d\n",j);
		}
		b=a[i+1];
		c=a[i+2];
	}
	
}
