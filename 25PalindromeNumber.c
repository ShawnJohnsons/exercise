/**************************************************************
一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同
**************************************************************/
#include<stdio.h>
#include<time.h> 
void check(int num)
{
	int bit, ten, thousand, million;
	bit = num % 10;
	million = num / 10000;
	ten = (num % 100) / 10;
	thousand = (num % 10000) / 1000;
	if(bit == million && ten == thousand)
	{
		printf("%d is Palindrome number" , num);
	}
	else
	{
		printf("%d is not Palindrome number" , num);
	}
}
main()
{
	int num;
	srand((unsigned)time(NULL));
	num = rand() % 100000;
	check(num);
}
