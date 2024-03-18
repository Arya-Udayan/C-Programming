#include<stdio.h>
#include<stdlib.h>
void main(){
int *a;
int n,i,j,count=0,maxCount=0,maxValue;
printf("\nEnter the limit:");
scanf("%d",&n);
a = (int *)calloc(n,(sizeof(int)));
   for(i=0;i<n;i++)
   {
       printf("Enter the Number %d: ",i+1);
       scanf("%d",&a[i]);
    }
for(i=0;i<n;i++)
{
    count=0;
  for(j=i+1;j<n;j++)
   {
      if(a[i]==a[j])
	   {
         count++;
       }
   }
     if(count>maxCount)
    {
      maxCount=count;
      maxValue=a[i];
    }
}
 printf("\nNumbers Are:");
   for(i=0;i<n;i++)
   {
      printf("%d \t",a[i]);
   }
    if(count==maxCount)
	{
       printf("Mode does not exit");
    }
else
    printf("Mode is: %d",maxValue);
    free(a);
return ;
}
