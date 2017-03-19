/*****************************************************************
有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数 
*****************************************************************/
#include<stdio.h>
#include<time.h>
#define N 10 
#define M 5
int change(int a[], int n, int m)
{
	int i;
	int b[n];
	for(i = 0; i < m; i++)
	{
		b[i+m] = a[i];
	}
	for(i = m; i < n; i++)
	{
		b[i-m] = a[i];
	}
	for(i = 0; i < n; i++)
	{
		a[i] = b[i];
	}
	return *a; 
}
main()
{
	int array[N];
	srand((unsigned)time(NULL));
	int i;
	printf("the old order:\n");
	for(i = 0; i < N; i++)
	{
		array[i] = rand()%100;
		printf("%d	", array[i]);
	}
	printf("\n"); 
	printf("the new order:\n");
	change(array, N, M);
	for(i = 0; i < N; i++)
	{
		printf("%d	", array[i]);
	}
}
