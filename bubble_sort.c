#include<stdio.h>

int main()
	{
		int A[20];
		int i,n;
		int k; //steps
		int flag=0;
		int temp;
         


        printf("How many elements to sort? [Max 20]\n");
        scanf("%d",&n);

        printf("Enter Elements\n");
        for(i=0;i<n;i++)
        	{
        		scanf("%d",&A[i]);
        	}

        printf("Ur unsorted Elements\n");
        for(i=0;i<n;i++)
        	{
        		printf("%d",A[i]);
        	}


        for(k=1;k<n-1;k++)
        {
        	flag=0;
        	for(i=0;i<n-k-1;i++)
        	{
        		if(A[i]>A[i+1])
        		{
        			temp=A[i];
        			A[i]=A[i+1];
        			A[i+1]=temp;
        			flag=1;
        		}
        	}

        	if(flag==0)
        	{
        		break;
        		
        	}
        	
        }

        printf("\nYour Sorted Elements\n");
        for(i=0;i<n;i++)
        	{
        		printf("%d ",A[i]);
        	}
        //printf("\n%d",flag); uncomment to see number of passes
         
        printf("\n");
        return 0;

	}