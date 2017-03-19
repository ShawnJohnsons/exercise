/***************
对10个数进行排序
**************/
#include<stdio.h>
#include<time.h>
int order(int a[])
{
	int i , j;
	int temp;
	for(i = 0; i < 10; i++)
	{
		for(j = 9; j > i; j--)
		{
			if(a[j - 1] > a[j])
			{
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
	return *a;
}
void main()
{
	int a[10];
	srand((unsigned)time(NULL));
	int i;
	printf("the old order :\n");
	for(i = 0; i <= 9; i++)
	{
		a[i] = rand()%1000;
		printf("%d	"	, a[i]);
	}
	printf("the new order :\n");
	order(a);
	for(i = 0; i <= 9; i++)
	{
		printf("%d	", a[i]);
	}	
	
}
