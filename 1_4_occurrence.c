//element occurance in an array
#include<stdio.h>
int main()
{
	int n,array[100],num,count=0,i;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the element into the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("enter an element to find the occurance:\n");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num==array[i])
		count++;
		
	}
	printf("occurance of %d is:%d",num,count);
}
