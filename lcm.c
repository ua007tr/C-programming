#include<stdio.h>
#include<conio.h>
#include<math.h>
int lcm(int a,int  b);
int main()
{
	int a,b,LCM,max;
	printf("Enter any two number :");
	scanf("%d %d",&a,&b);
	printf("Least Common Multiple between %d and %d are :",a,b);
	if (a>b)
		LCM=lcm(a,b);
	else
		LCM=lcm(b,a);
	printf("%d",LCM);
	return 0;
}
int lcm(int a,int  b)
{
	static int i=0;
	i += b;
	if((i%a==0) && (i%b==0))
	{
		return i;
	}
	else
	{
		return lcm(a,b);
	}
	return 0;
}
