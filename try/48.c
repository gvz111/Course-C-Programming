#include<stdio.h>
#include<stdlib.h>
/* own strlen */

int strleng(char str[])
{
	int i,count=0;
	for(i=0;str[i]!='\0';i++)
		count++;
	str[i]='\0';
	return count;
}

void main()
{
	char str[]="1234567890";
	printf("%d\n",strleng(str));
}
