#include<stdio.h>
//////////////////////////////////////////////
void strCpy(char* s1,char* s2)
{
	while(*s2!='\0')
		*s1++ = *s2++;
	*s1='\0';
}
//////////////////////////////////////////////
void strNcpy(char* s1,char* s2,int n)
{
	while(n-- >0)
		*s1++ =*s2++;
	*s1='\0';
}
//////////////////////////////////////////////
int strCmp(char* s1,char* s2)
{
	while(*s1 !='\0')
	{
		if(*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 > *s2)?1:-1;
	}
	return 0;
}
//////////////////////////////////////////////
int strNcmp(char* s1,char* s2,int n)
{
	while(n-- >0)
	{
		if(*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1>*s2)?1:-1;
	}
	return 0;
}
//////////////////////////////////////////////
void strCat(char* s1,char* s2)
{
	while(*s1!='\0')
		s1++;
	while(*s2!='\0')
		*s1++ = *s2++;
	*s1='\0';
}
//////////////////////////////////////////////
void strNcat(char* s1,char* s2,int n)
{
	while(*s1!='\0')
		s1++;
	while(n-- >0)
		*s1++ = *s2++;
	*s1='\0';
}
//////////////////////////////////////////////
char* strChar(char* s1,char n)
{
	while(*s1!='\0')
	{
		if(*s1 == n)
			return s1;
		s1++;
	}
	return NULL;
}
//////////////////////////////////////////////
char* strRchar(char* s1,char n)
{
	char* lim =s1;

	while(*lim !='\0')
		lim++;

	while(lim >= s1)
	{
		if(*lim == n)
			return lim;
		lim--;
	}
	return NULL;
}
//////////////////////////////////////////////////
char* strstr(char* s1,char* s2)
{
	char* start;
	char* p1;
	char* p2;

	while(*s1!='\0')
	{
		start=s1;
		p1=s1;
		p2=s2;

		while(*p1!='\0' && *p2!='\0' && *p1==*p2)
		{
			p1++;
			p2++;
		}
		if(*p2 =='\0')
			return start;
		s1++;
	}
	return NULL;
}
//////////////////////////////////////////////
char* strpbrk(char* s1,char* s2)
{
	char* p;

	while(*s1!='\0')
	{
		p=s2;

		while(*p !='\0')
		{
			if(*p == *s1)
				return s1;
			p++;
		}
		s1++;
	}
	return NULL;
}
//////////////////////////////////////////////
int main(void)
{
	char s1[]="Heello";
	char s2[]="l";
	///int n=4;

	char* p=strpbrk(s1,s2);
	printf("%s\n",p);
}
