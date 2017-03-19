/*******************************************
有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
********************************************/
#include<stdio.h>
void game()
{
	int i, sum = 17, people[17], count;
	for(i = 0; i < sum; i++)
	{
		people[i] = 1;
	}
	count = 0;
	while(sum != 1)
	{
		for(i = 0; i < 17; i++)
		{
			count += people[i];
			if(count == 3)
			{
				people[i] = 0;
				count = 0;
				sum--;
			}	
		}
	}
	for(i = 0; i < 17; i++)
	{
		if(people[i] == 1)
		printf("the left is %d!", i);
	} 
}
main()
{
	game();
} 
