#include<stdio.h>
#include<stdlib.h>
#include"Header.h"

int occSubStr(char *str1,char *str2)
{
	int count=0;
	while(*str1!='\0')
		count += ( strPrefix(str1++,str2) );
	return count;
}

void main()
{
	char str1[]="1234xx123cc123";
	char str2[]="123";
	printf("%d\n",occSubStr(str1,str2));
}
