/***************************************************************************************
���ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ�� �ڶ��������ֽ�ʣ
�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�� 
��һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�  
***************************************************************************/
#include<stdio.h>
int peach(int n)
{
	int peachNum[n];
	int i;
	peachNum[0] = 1;
	for(i = 1; i < n; i++)
	{
		peachNum[i] = (peachNum[i - 1] + 1) * 2;
	}
	return peachNum[n - 1];
	
}
void main()
{
	int num;
	num = peach(10);
	printf("the number of peach is : %d", num);
}