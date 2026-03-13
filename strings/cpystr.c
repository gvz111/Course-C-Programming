#include <stdio.h>
#include <stdlib.h>

int strleng(char str[])
{
	int count=0;
	for(int i=0;str[i]!='\0';i++)
		count++;
	return count;
}

void strcopy(char dest[],char source[])
{
	for(int i=0;source[i]!='\0';i++)
		dest[i]=source[i];
	 dest[strleng(source)]='\0';
}


void reverse(char str[])
{
	char copy[strleng(str)+1];

	for(int i=strleng(str)-1,j=0;i>=0;i--,j++)
		copy[j]=str[i];
	copy[strleng(str)]='\0';

	for(int i=0;copy[i]!='\0';i++)
		printf("%c",copy[i]);
	printf("\n");
}

void main()
{
	char str[]="Ali Badran!";
	reverse(str);
}
