#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* insert(char* s,char c,int n)
{
	char* str = malloc(strlen(s)+2);
	char* start = str;

	int count=1;

	while(*s !='\0')
	{
		if(count++ == n)
			*str++ = c;
		*str++ = *s++;

	}
	if(count == n)
		*str++ =c;

	*str='\0';

	return start;
}

int main(void)
{
	char s[]="abcdef";
	puts(insert(s,'@',7));
}
