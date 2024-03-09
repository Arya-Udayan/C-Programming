#include<stdio.h>
int main()
{
	int a[10],i,n,j,elem,temp;
	printf("enter value of n");
	scanf("%d",&n);
	
	
		printf("enter the array elements\n");
     	for(i=0;i<n;i++)
     {
     	scanf("%d",&a[i]);
     }
        
		 printf("\nthe array elements are :");
         for(i=0;i<n;i++)
         {
         	printf("%d ",a[i]);
		 }
		  
		  printf("\n enter an element to be searched :");
		  scanf("%d",&elem);
		  
		  for(i=0;i<n;i++)
		  {
		  	if(elem==a[i])
	    	{
		      	printf("element found at  position %d\n",i+1);
		      	break;
		     }
	     }
	     if(i==n)
		    {
		     	printf("element not found");
		    }
        
      for(i=0;i<n-1;i++)
      
      	  for(j=i+1;j<n;j++)
      	  {
         	if(a[i]>a[j])
      	   {
      		  temp=a[i];
      		  a[i]=a[j];
      		  a[j]=temp;
	    	}
         }
    
       printf("\nthe sorted array is :");
        for(i=0;i<n;i++)
        {
      printf("%d ",a[i]);
        }
		   return 0;
}


