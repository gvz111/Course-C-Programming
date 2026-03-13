#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>	/// INT_MAX

ssize_t foo(const char* s)
{
	size_t minLength=INT_MAX;
	size_t length= 0;

	for(int i=0; s[i]!='\0'; i++)
	{
		if(s[i]!=' ')
			length++;
		else
		{
			if(length>0 && length<minLength)
				minLength = length;
			length=0;
		}
	}

	return minLength;
}

int main(void){

	const char* s="ze bitcoin take over this world maybe whos knows perhaps";
	printf("%ld\n",foo(s));
}
