#include<stdio.h>
int score(int grade)
{
	if(grade >= 90)
	{
		return 0;
	}
	else if(grade >= 60 && grade <= 89)
	{
		return 1;
	}
	else
	{
		return 2;
	}
} 

void main()
{
 	int testGrade[20]={99,100,0,15,65,85,75,66,60,88,95,90,45,62,78,86,41,2,63,49}	;
 	int i;
 	for(i = 0; i < 20; i++)
 	{
 		if(score(testGrade[i]) == 0)
 		{
 			printf("%d is A\n" , testGrade[i]);
 		}
 		else if(score(testGrade[i]) == 1)
 		{
 			printf("%d is B\n" , testGrade[i]);
 		}
 		else 
 		{
 			printf("%d is C\n" , testGrade[i]);
 		}
 	}
	
}
