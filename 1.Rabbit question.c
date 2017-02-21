/*Rabbit question*/
#include<stdio.h>
void main()
{
	long RabbitNum1=0,RabbitNum2=1,RabbitNum3=1;
	int month;
	int i;
	printf("please input the deadline of month:");
	scanf("%d",&month);
	printf("There are %ld in the 1 month\n",2*RabbitNum2);
	for(i = 2;i <= month;i++)
	{
		RabbitNum3=RabbitNum1+RabbitNum2;
		RabbitNum1=RabbitNum2;
		RabbitNum2=RabbitNum3; 
		printf("There are %ld in the %d month\n",2*RabbitNum3,i);
	}
} 
