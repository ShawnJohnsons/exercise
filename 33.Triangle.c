/**************************************** 
��Ŀ����ӡ����������Σ�Ҫ���ӡ��10������ͼ�� 
        1 
       1 1 
     1 2 1 
    1 3 3 1 
   1 4 6 4 1 
1 5 10 10 5 1 
***************************************/
#include<stdio.h>
#define N 6
void triangle()
{
	int i , j;
	int a[N][N];
	for(i = 0; i <N; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for(i = 2; i < N; i++)
    {
        for(j = 1; j < i; j++)
     a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
    for(i = 0; i < N; i++)
    {
        for(j = 0; j <= i; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}
main()
{
	triangle();
}
