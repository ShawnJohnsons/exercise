/*****************************************************************
дһ����������һ���ַ����ĳ��ȣ���main�����������ַ�����������䳤�ȡ�
*******************************************************************/
#include <stdio.h>
int func(char *s)
{
    char *p = s;
    while(*p)
	{
		p++;	
	}
    return p - s;
}
int main(void) 
{
    char str[100];
    printf("input a string:");
    gets(str);
    printf("%d\n",func(str));
    return 0;
}

