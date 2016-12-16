#include<stdio.h>

int main()
	{

		int A[10];
		int n,i,j;
		int temp;


        printf("Enter array size\n");
        scanf("%d",&n);

        printf("Enter Array elements to be sorted\n");
        for(i=0;i<n;i++)
        		{
        			scanf("%d",&A[i]);
        		}
        printf("The unsorted array is\n");
        for(i=0;i<n;i++)
        		{
        			printf("%d ",A[i]);
        		}


        for(i=1;i<n;i++)
	        {
	        	
	        	temp=A[i];
	        	j=i-1;

	        

			     while(temp<A[j] && j>=0)
			     {

			     	A[j+1]=A[j];
			     	--j;
			     }

	          A[j+1]=temp;

	       }
         
        printf("\nThe Sorted array is\n");
        for(i=0;i<n;i++)
        		{
        			printf("%d ",A[i]);
        		}


	      return 0;   


	}