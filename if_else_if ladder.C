#include<stdio.h>
#include<stdlib.h>
main()
{
	printf("Enter Marks: ");  //enter the mark 
	int m;
	scanf("%d",&m);
	if(m>=85 && m<=100) 
		{
			printf("GRADE A");    // 85 to 100 then Grade A
		}
	else if(m>=70 && m<=84)
		{
			printf("GRADE B");    // 70 to 84 then Grade B
		}
	else if(m>=55 && m<=69)
		{
			printf("GRADE C");    // 55 to 69 then Grade C
		}
	else if(m>=40 && m<=54)
		{
			printf("GRADE D");    // 40 to 54 then Grade D
		}
	else
		{
			printf("GRADE F");    // below 40 then Grade F
		}
return 0;	
}
