#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char* get_initials (char* full_name, char initials[])
{
	int i=0;
	if(*full_name !=' ' && *full_name !='\0')
		{
			initials[i++]=toupper(*full_name);
			initials[i++]='.';
		}
	while(*full_name!='\0')
	{
		if(*full_name==' ' && *(full_name+1)!=' ')
		{
			initials[i++]=toupper(*(full_name+1));
			initials[i++]='.';
		}
		full_name++;
	}

	initials[i]='\0';
	return initials;
}

int main(void)
{
	char initials[50];
	char full_name[]="Gevorg Hovsepyan coscobravo cortes ";
	printf("%s\n",get_initials(full_name,initials));
}
