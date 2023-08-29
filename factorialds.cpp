#include<stdio.h>
int main()
{
	int n,i;
	unsigned long long fact=1;
	printf("enter an integer:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("factorial number:%d",fact,n);
	return 0;
}
