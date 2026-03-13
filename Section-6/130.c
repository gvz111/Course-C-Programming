#include<stdio.h>
#include<stdlib.h>

int strln(char* s)
{
	int count=0;
	while(*s++ !='\0')
		count++;
	return count;
}

void strcopy(char* s1,char* s2)
{
	while(*s2 !='\0')
		*s1++ = *s2++;
	*s1 ='\0';
}

char* crtStr()
{
	char* temp = malloc(30);

	printf("enter string: ");
	scanf(" %29s",temp);

	int n =strln(temp);
	char *str = malloc(n+1);
	strcopy(str,temp);

	free(temp);
	return str;
}
int main(void)
{
	char* names[3];
	for(int i=0; i<3; i++)
		names[i]=crtStr();

	for(int i=0; i<3; i++)
		printf("%s",names[i]);

	for(int i=0; i<3; i++)
		free(names[i]);
}
