/*一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？*/
#include<stdio.h>
#include<math.h>
void check()
{
	int i, temp1, temp2;
	for(i =1; i <= 10000; i++)
	{
		temp1 = sqrtf(i + 100);
		temp2 = sqrtf(i + 168);
		if(temp1 * temp1 == i+100 && temp2 * temp2 == i + 168)
		{
			printf("the number is : %d\n", i);
		}
	}
}
void main()
{
	check();
}
