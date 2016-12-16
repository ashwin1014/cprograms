//Linear search for elements in multiple positions


#include<stdio.h>

int main()

	{
		int A[20]={2,5,7,2,5,8,4,5};
		int n,i,k,count=0;


		printf("Enter element to search\n");
		scanf("%d",&k);

		n=sizeof(A);

		for(i=0;i<n;i++)

		{
			if(A[i]==k)
			{
				printf("\n %d found in %d",k,i+1);
				count++;
			}
		}


      if(count==0)
      {
      	printf("%d not found\n",k);
      }

      else
      {
      	printf("\n%d Occurs %d times",k,count);
      }

	}