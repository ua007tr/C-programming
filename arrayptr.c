#include <stdio.h>

void main()
{
	int arr[3][3],i,j;
	int s=0;
	printf("Read a 2D array of size 3x3 and Print the matrix and its sum of diagonals using pointers :\n");  
 
    /* Stored values into the array using pointer*/
	printf("\n Input elements in the matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	  	{
	      	printf("element - [%d],[%d] : ",i,j);
	      	scanf("%d",(arr[i]+ j));
	  	}
	} 
	
	/* Getting values from the pointer into array*/ 
	printf("\nThe matrix is : \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	       printf("%d \t",*( *(arr + i) + j));
		}
		printf("\n");
	}
	printf("\n");
	
	/* sum of all diagonal elements */
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	  	{
			if(i==j)
			{
				s = s + *( *(arr + i) + j) ;
			}
		}
	}
	printf("Sum of diagonals are: %d",s);
}
