//Linear search



#include<stdio.h>

int main()
	{
		int A[5];
		int k,n,i,x;


        printf("Enter array size\n");
        scanf("%d",&n);

        printf("Enter array elements\n");
        for(i=0;i<n;i++)
        {
        	scanf("%d",&A[i]);
        }


        printf("Enter element u want to search\n");
        scanf("%d",&k);

        

      for(i=0; i<n; i++)
	      {
	        if(A[i]==k)
	        {
	        	printf("%d found in index %d",k,i+1);
	        	break;
	        }	


	      }

	    if (i==n)
	    {
	    	printf("\nElement not found");
	    }

	      return 0;


	}