/******************************************************
打印出如下图案（菱形） 
    * 
   *** 
 ****** 
******** 
 ****** 
  *** 
   * 
****************************************************/
#include<stdio.h>
void printDiamond()
{
	int i, j;
	for(i = 0; i <= 3; i++)
	{
		for(j = 0; j <= 3 - i; j++)
		{
			printf(" ");
		}
		for(j = 0; j <= i * 2; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i = 1; i <= 3; i++)
	{
		for(j = 1; j <= i + 1; j++)
		{
			printf(" ");
		}
		for(j = 6; j >= i * 2; j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
void main()
{
	printDiamond();
}
