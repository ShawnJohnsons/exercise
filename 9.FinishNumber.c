#include<stdio.h>
void finishNumber()
{
	int i , j;
	int sum;
	for(i = 2; i <= 1000; i++)
	{
		sum = 0;
		for(j = 1; j < i; j++)
		{
			if(i % j == 0)
			{
				sum += j; 
			}
		}
		if(sum == i)
		{
			printf("the finish number is¡¡£º%d\n" , sum);	
		}
	}
}
void main()
{
	finishNumber();
}
