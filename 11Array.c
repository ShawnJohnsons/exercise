/*有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少*/ 
#include<stdio.h>
void array()
{
	int i, j, k;
	int num;
	for(i = 1; i <= 4; i++)
	{
		for(j = 1; j <= 4; j++)
		{
			for(k = 1; k <= 4; k++)
			{
				if(i != j && j != k && k != i)
				{
					num = i * 100 + j * 10 + k; 
					printf("num: %d\n", num);
				}
			}
		}
	}
}
void main()
{
	array();
} 
