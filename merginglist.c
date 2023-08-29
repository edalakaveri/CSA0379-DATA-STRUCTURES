#include<stdio.h>
int main()
{
	int list1[]={1,2,3};
	int size1=  sizeof(list1)/sizeof (list1[0]);
	int list2[]={4,5,6};
	int size2=sizeof(list2)/sizeof(list2[0]);
	int mergedlist[size1+size2];
	int i;
	for(i=0;i<size1;i++){
		merged list[i]=list1[i];
	}
	for(i=0;i<size2;i++){
		mergedlist[size1+i]=list2[i];
	}
	int mergedsize=size1+size2;
	printf("merged list:");
	for(i=0;i<mergedsize;i++){
		printf("%d",mergedlist[i]);
	}
	return 0;
}
