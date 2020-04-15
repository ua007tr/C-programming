#include<stdio.h>
int main()
{
	int i,j;	
	for(i=1;i<=6;i++)	//outter for loop
	{
		for(j=1;j<=i;j++)	//inner for loop
		{
			printf("01");	//printing the value to be displayed on the pattern
		}
		printf("\n");	//print on next line
	}
	return 0;
}
