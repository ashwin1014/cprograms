


#include<stdio.h>


int main()
	{
		int A[15];
		int k,i,n,x;

		printf("Enter length of array\n");
		scanf("%d",&n);

        printf("Enter the elements\n");
        for(i=0;i<n;i++)
          {
            
            scanf("%d",&A[i]);

          }


        printf("The original Array\n");
        for(i=0;i<n;i++)
          {
            
            printf("%d ",A[i]);

          }

         printf("Enter the position you want to update\n");
         scanf("%d",&k);

         printf("Enter the new value\n");
         scanf("%d",&x);

         A[k-1]=x;

        printf("The Updated Array\n");
        for(i=0;i<n;i++)
          {
            
            printf("%d ",A[i]);

          }


        return 0;

	}
