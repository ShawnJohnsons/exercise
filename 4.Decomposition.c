#include<stdio.h>
#include<time.h>
void print(int num)
{
	if(num <= 1)
	{
		printf(" %d", num);
	}
	else if(num == 2)
	{
		printf(" * 2");
	}
	else
	{
		printf(" * %d", num);
	}

}

int decomposition(int num)
{
	int i = 2;
	if(num <= 1)
	{
		print(num);
	}
	else if(num == 2)
	{
		print(num);
	}
	else
	{	
		print(1);
		while(i <= num)
		{
			if(num % i == 0)
			{
				
				num = num / i;
				print(i);
			}
			else
			{
				i++;
			}
		}
	}
}



int main()
{
	int check[20] = {0};
	srand((unsigned)time(NULL));
	int i;
	for(i = 0; i < 20; i++)
	{
		check[i] = rand()%100+1;
		printf("%d = ", check[i]);
		decomposition(check[i]);
		printf("\n");
		
	}
	
}
