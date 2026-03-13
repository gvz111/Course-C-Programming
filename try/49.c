#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* own strcopy */

void strcopy(char str2[],char str1[])
{
	int i;
	for(i=0;str1[i]!='\0';i++)
		str2[i]=str1[i];
	str2[i]='\0';
}

void main()
{
	char str1[]="String to copy.";
	char str2[strlen(str1)];
	strcopy(str2,str1);
	puts(str2);
}
