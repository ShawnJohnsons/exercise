/*************************
Çó1+2!+3!+...+20!µÄºÍ
***********************/
#include<stdio.h>
int sumFactorial(int num1)
{
	int i;
	int sum = 0;
	for(i = 1; i <= num1; i++)
	{
		sum = sum + factorial(i);
	}
	return sum;
}
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
	printf("1+2!+3!+...+20! = %d", sumFactorial(20));
}
