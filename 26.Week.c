/**********************************************************************************
���������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ��������� �жϵڶ�����ĸ��
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
