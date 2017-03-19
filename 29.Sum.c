/***************************
求一个3*3矩阵对角线元素之和
****************************/
#include<stdio.h>
#include<time.h>
int matrix(int a[][])
{
	int sum;
	sum = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2] * a[1][0] * a[2][1] - a[0][2] * a[1][1] * a[2][0] -a[0][1] * a[1][0] * a[2][2] - a[0][0] * a[1][2] * a[2][1]; 	
	return sum;
}
void main()
{
	int a[3][3];
	int i , j;
	srand((unsigned )time(NULL));
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			a[i][j] = rand()%100;
		}
	}	
	//matrix(a);
	printf("sum = ",matrix(a));
	
}
