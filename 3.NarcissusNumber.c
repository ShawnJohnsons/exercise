#include<stdio.h>
void main()
{
	printf(" Narcissus number: \n");
	int a,sum;     //a=100~999  
	int i,j,k;       // i is bit, j is ten, k is hundreds
	for(a=100;a<=999;a++)
	{  
        i = a / 100;  
    	j = (a - i * 100) / 10;  
        k = a-i * 100 - j * 10;  
    	sum = i * i * i + j * j * j + k * k * k;
		if(sum == a)
		{
			printf("%d\t",sum);
		}  
		 
	}
	
} 
