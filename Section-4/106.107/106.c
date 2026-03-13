#include<stdio.h>
#include<stdlib.h>
#include"Header.h"

int strPrefix(char *str1,char *str2)
{
	while(*str2!='\0')
		if(*str1++ != *str2++)
			return 0;
	return 1;
}

int subStr(char *str1,char *str2)
{
	while(*str1!='\0')
		if( strPrefix(str1++,str2) ) return 1;
	return 0;
}
/*
void main()
{
	char str1[]="55122345";
	char str2[]="123";
	printf("%d \n",subStr(str1,str2));
}
*/
