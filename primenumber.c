#include<stdio.h>
int primenumber(int);

int main()
{
	int n,flag;
	printf("Enter a number : ");
	scanf("%d",&n);
	flag = primenumber(n);
		if(flag == 1)
	{
		printf("prime number \n");
	}
	else
	{
		printf("not prime number \n");	
	}
	return 0;
}

int primenumber(int n) 
{
    int j, flag = 1;
    for (j = 2; j <= n / 2; ++j) 
	{
        if (n % j == 0) 
		{
            flag = 0;
            break;
        }
    }
    return flag;
}
