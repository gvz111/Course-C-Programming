#include<stdio.h>
#include"strPrefix.h"

int subStr(char* str1,char* str2)
{
	while(*str1 != '\0')
	{
		if( strPrefix(str1++,str2) )
			return 1;
	}
	return 0;
}

int main(void)
{
	char* s1="1223";
	char* s2="";

	printf("%d\n",strPrefix(s1,s2));
	printf("%d\n",subStr(s1,s2));
}
