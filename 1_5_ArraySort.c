//sorting in ascending order
#include<stdio.h>
int n,array[100];
int main()
{
   	 read();
	sort();
	display();
}
void read()
{
	int num,i;
	printf("enter the limit of the arrray\n");
	scanf("%d",&n);
	printf("enter the element in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
}
void sort()
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
			
		}
	}
	
}
void display()
{
	int i;
	printf("sorted array is:\n");
	for(i=0;i<n;i++)
	printf("%d\n",array[i]);
	
	
}
