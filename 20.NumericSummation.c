/**************************************************
有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。 
************************************************/
#include<stdio.h>
float numericSummation()
{
	float i, j, k;
	j = 2;
	k = 1;
	float sum = 0;
	for(i = 1; i <= 20; i++)
	{
		sum = sum + j / k;
		j = j + k;
		k = j - k;
	}
	return sum;
}

void main()
{
	float sum;
	sum = numericSummation();
	printf("numeric summation is : %f", sum);
}
