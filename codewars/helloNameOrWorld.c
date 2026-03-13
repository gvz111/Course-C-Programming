#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char* capitalize(const char* str)
{
	if(!str) return NULL;

	char* res= malloc(strlen(str)+1);
	char* start=res;

	res[0] = toupper(str[0]);

	res++;
	str++;

	while(*str != '\0')
		*res++ = tolower(*str++);

	*res ='\0';
	return start;
}

char* hello(const char* name)
{
	if(!name || !*name)
	{
		char* str= malloc(strlen("hello, world!")+1);
		strcpy(str,"Hello, World!");
		return str;
	}

	char* str= malloc(strlen("Hello, ")+strlen(name)+1+1);
	char* cap= capitalize(name);

	strcpy(str,"Hello, ");
	strcat(str,cap);
	strcat(str,"!");

	free(cap);
	return str;
}

int main(void)
{
	char name[]="saLliVAN";

	char* s =hello(name);
	puts(s);
	free(s);
}
