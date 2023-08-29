#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10],i,n,ele;
	printf("enter a number:");
	scanf("%d",&n);
	printf("enter an array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter elements to search:");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(arr[i]==ele)
		{
		printf("%d found at position %d",ele,i+1);
		return 0;
	}
}
printf("element not found");
}
