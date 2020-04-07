#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c;
	printf("To perform swapping of two numbers\n\n");
	printf("*******BEFORE SWAPPING*******\n");
	printf("Value of a before swapping = "); // the value of a that the user assigns "before swapping"
	scanf("%d",&a);
	printf("Value of b before swapping = "); // the value of b that the user assigns "before swapping"
	scanf("%d",&b);
			a = a + b;
			b = a - b;
			a = b - a;
	printf("\n");
	printf("*******AFTER SWAPPING*******\n");
	printf("Value of a after swapping =%d \n",a); // the value of a that the user assigns has been changed "after swapping"
	printf("Value of b after swapping =%d \n",b); // the value of b that the user assigns has been changed "after swapping"
return 0;
}
