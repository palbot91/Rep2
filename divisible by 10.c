//Divisible by n or not//
#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter any number to divide:");
	scanf("%d",&n);
	printf("Enter any number:");
	scanf("%d",&n);
	if(m%n==0)
	{
		printf("\n Number is divisible by 10");
	}
	else
	{
		printf("\n Number is not divisible");
	}
	return 0;
}
