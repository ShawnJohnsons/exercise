/*һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�*/
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
