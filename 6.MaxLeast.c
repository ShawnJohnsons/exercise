#include<stdio.h>
#include<time.h>
int maximumCommonDivisor(int num1 , int num2)
{
	int temp;
	if(num1 < num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	int mcd;
	if(num1 % num2 == 0)
	{
		return num2;
	}
	else 
	{
		num1 = num1 % num2;       
		return maximumCommonDivisor(num1 , num2);
	}
}
int leastCommonMultiple(int num1 , int num2)
{
	int temp;
	if(num1 < num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	int lcm = num1;
	int i = 1;
	while(lcm % num2 != 0)
	{
		lcm = num1 * i;
		i++;
	}
	return lcm;
	
}
void main()
{
	int num1[20] = {};
	int num2[20] = {};
	srand((unsigned)time(NULL));
	int i;
	int lcm , mcd;
	for(i = 0; i < 20; i++)
	{
		num1[i] = rand() % 50 + 1;
		num2[i] = rand() % 50 + 1;
		lcm = leastCommonMultiple(num1[i], num2[i]);
		printf("%d and %d : the least common multiple is %ld\n" , num1[i] , num2[i] , lcm);
		mcd = maximumCommonDivisor(num1[i] , num2[i]);
		printf("%d and %d : the maximum common divisor is %d\n" , num1[i] , num2[i] , mcd);
		printf("\n");
	}
	
	
	
	
	
	
	//lcm= leastCommonMultiple(6, 12);
	//printf("the least common multiple is %d",lcm );
	//printf("the least common multiple is %ld\n",leastCommonMultiple(5, 13));
	//	printf("the maximum common divisor is %d\n",maximumCommonDivisor(5 , 13));
} 
