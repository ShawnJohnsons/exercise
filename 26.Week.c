/**********************************************************************************
请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续 判断第二个字母。
***********************************************************************************/
#include<stdio.h>
void week(char letter)
{
		char secondLetter;
		switch(letter)
		{
			case 'm' : 
				printf("It is monday!"); 
				break;
			case 't' : 
				printf("next letter :");	
				getchar();
				scanf("%c", &secondLetter);
				if(secondLetter == 'u')
				{
					printf("It is tuesday!");
				}
				if(secondLetter == 'h')
				{
					printf("It is thurday!");	
				}
			
				break;
			case 'w' : 
				printf("It is wednesday!");
				break;
			case 'f' : 
				printf("It is friday!");
				break;
			case 's' :
				printf("next letter :");
				getchar();
				scanf("%c" , &secondLetter);
				if(secondLetter == 'a')
				{
					printf("It is saturday!");
					break;
				}
				if(secondLetter == 'u')
				{
					printf("It is sunday!");
					break;
				}
				break;
			default :  
            	printf("error\n"); 
				break;  
		}
}
main()
{
	char letter;
	printf("please input the initials of week:");
	letter = getchar();  
	if(letter != '\n')
	{
		week(letter);
	}
}
