/************************
Çó5!µÄºÍ
*******************/
#include<stdio.h> 
int factorial(int num)
{
	int sum;
	if(num == 1)
	{
		return 1;
	}
	else
	{
		sum = num * factorial(num - 1);
	}
	return sum;
}
main()
{
	printf("5! = %d", factorial(5));
}
