#include<stdio.h>
#include"strPrefix.h"

int strPrefix(char* str1,char* str2)
{
	while(*str2 != '\0')
		if(*str2++ != *str1++)
			return 0;
	return 1;
}
