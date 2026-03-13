/// a->1; e->2; i->3; o->4; u->5
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* encode(const char* string)
{
	char* s = malloc(strlen(string)+1);
	char* start = s;

	while(*string !='\0')
	{
		if(*string =='a')
			*s++ ='1';
		else if(*string =='e')
			*s++ ='2';
		else if(*string =='i')
			*s++ ='3';
		else if(*string =='o')
			*s++ ='4';
		else if(*string =='u')
			*s++ ='5';
		else
			*s++ = *string;
		string++;
	}
	*s='\0';

	return start;
}

char* decode(const char* string)
{
	char* s = malloc(strlen(string)+1);
	char* start = s;

	while(*string !='\0')
	{
		switch(*string)
		{
			case '1':
				*s++ ='a';
				break;
			case '2':
				*s++ ='e';
				break;
			case '3':
				*s++ ='i';
				break;
			case '4':
				*s++ ='o';
				break;
			case '5':
				*s++ ='u';
				break;
			default:
				*s++ = *string;
		}
		string++;
	}
	*s='\0';

	return start;
}

int main(void)
{
	char str[]="hello";
	char* p=encode(str);
	puts(p);
	free(p);

	char str2[]="h3 th2r2";
	char* p2=decode(str2);
	puts(p2);
	free(p2);
}
