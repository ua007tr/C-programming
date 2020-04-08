#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{   
	int x=0;
	printf("****WELCOME TO MYCAPTAIN BISTRO****\n");
	printf("\nSelect the food that you want to order \n1. Idly,Rs 05 \n2. Dosa,Rs 10  \n3. Uttappa,Rs 20 \n4. Pongal,Rs 30 \n5. Sambar Rice,Rs 35 \n");
	printf("\nEnter Your Choice : "); //select the food that you want to eat
	scanf("%d",&x);
	printf("\n");
	switch(x)
	{
		case 1:printf("Food Item That You Have Selected - Idly \nPrice - Rs 05 \n");
		break;
		case 2:printf("Food Item That You Have Selected - Dosa \nPrice - Rs 10 \n");
		break;
		case 3:printf("Food Item That You Have Selected - Uttappa \nPrice - Rs 20 \n");
		break;
		case 4:printf("Food Item That You Have Selected - Pongal \nPrice - Rs 30 \n");
		break;
		case 5:printf("Food Item That You Have Selected - Sambar Rice \nPrice - Rs 35 \n");
		break;
		default:printf("Enter Correct Option \n");
		return 0;
	}
}
