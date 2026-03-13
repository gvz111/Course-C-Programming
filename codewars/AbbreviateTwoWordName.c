#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* get_initials (char* full_name, char initials[3])
{
	initials[0]=*full_name; /// 1st initial
	initials[1]='.';	/// 2st initial

	while(*full_name != '\0')
	{
		if(*full_name==' ')
			initials[2]=*(full_name+1);
		full_name++;
	}
	initials[3]='\0';
	return initials; // return it
}

int main(void)
{
	char initials[3];
	char full_name[]="Gevorg Hovsepyan";
	printf("%s\n",get_initials(full_name,initials));
}
