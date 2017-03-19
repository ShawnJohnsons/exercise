/*****************************************************************
写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。
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

