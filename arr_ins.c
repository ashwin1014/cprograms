//A is a linear array, x is the element we want to insert and k is the position. n is the number of elements in the array




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

	    printf("\nEnter the element you want to insert ");
	    scanf("%d",&x);

        printf("\nEnter the position where u want to insert ");
	    scanf("%d",&k);


	    i=n-1; //upper bound since element starts from 0
	     while(k<=i)
	       {

             A[i+1]=A[i];
             i=i-1;

	       }

	    A[k]=x; //insert the element
	    n=n+1;  // increase length of array



	    printf("The new elements are\n\n");
        for(i=0; i<n; i++)
	        {

              printf("%d ",A[i]);

	        }



	}