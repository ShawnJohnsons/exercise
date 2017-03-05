#include<stdio.h>
void ballFalling()
{
	double sum = 100;
	double begin = 100;
	int i;
	for(i = 1; i <= 10; i++)
	{
		begin = begin /2;
		sum += 2 * begin;
	}
	printf("The total distance: %f\n" , sum);
	printf("the 10th hight is : %f", begin);
}

void main()
{
	ballFalling();	
}
