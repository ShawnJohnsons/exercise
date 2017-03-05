/*题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)*/
#include<stdio.h>
int operation(int count , int key)
{
	int i;
	int sum = key;
	int bit = key;
	for(i = 1; i < count; i++)
	{
		key = key * 10 + bit; 
		sum = sum + key;
	}
	return sum;	
}
void main()
{
	int key;
	int count; 
	printf("Please enter the number of operations: ");
	scanf("%d" , &count);
	printf("Please enter the number of the operation: ");
	scanf("%d" , &key);
	int sum;
	sum = operation(count , key);
	printf("the result : %d " , sum);
} 
