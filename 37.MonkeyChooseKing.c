/*******************************************
��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��
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
