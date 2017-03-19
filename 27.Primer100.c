/***********
求100之内的素数
*************/
#include<stdio.h>
#include<math.h>
int CheckPrimer(int num)
{
	int square;
	int i;
	square = (int)sqrt( (double)num);
	if(num > 1)
	{
		for(i = 2; i <= square; i++)
		{
			if(num % i == 0)
				break;
		}
		if(i > square)
		{
			return 1; 
		}
		else
		{
			return 0;
	    }
	}
	else
	{
		return 0;
	}
}
void main()
{
	int i;
	for(i = 1; i <= 100; i++)
	{
		if(CheckPrimer(i) == 1)
		{
			printf("%d is  a primer!\n" , i);
		}
		else
			continue;
	}
} 
