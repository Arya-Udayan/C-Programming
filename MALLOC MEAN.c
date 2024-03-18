#include<stdio.h>
#include<stdlib.h>
int main(){
int *a;
int n,i,sum=0,mean;
printf("Enter the value of n:");
scanf("%d",&n);
a=(int *)calloc(n,sizeof(int));
for(i=0;i<n;i++){
printf("Enter a[%d]:",i);
scanf("%d",(a+i));
sum+= *(a+i);
mean=sum/n;
}
printf("sum is %d \n", sum);
printf("mean is %d \n", mean);
free(a);
return 0;
}
