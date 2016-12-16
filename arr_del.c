//A is a linear array, k is the position from where we want to delete, n is the number of elements in the array




#include<stdio.h>

int main()
	{
		int A[10];
		int x;
		int k;
        int n;
        int i;


        printf("How many elements do you want?\n");
        scanf("%d",&n);

        printf("Enter the elements\n");
        for(i=0; i<n; i++)
	        {

              scanf("%d",&A[i]);

	        }

	    printf("The Original elements are\n");
        for(i=0; i<n; i++)
	        {

              printf("%d ",A[i]);

	        }

	    
        printf("\nEnter the position where u want to delete ");
	    scanf("%d",&k);


	    x=A[k]; //storing value of deleted element in case needed later

	    i=k+1; //upper bound

	    while(i<=n-1)
	    {

          A[i-1]=A[i];
          i=i+1;

	    }


	    n=n-1; //decrese length of array



	    printf("The new elements are\n");
        for(i=0; i<n; i++)
	        {

              printf("%d ",A[i]);

	        }


	   }