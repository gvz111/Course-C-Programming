#include<stdio.h>
#include<stdlib.h>

double* foo(int n)
{
	return malloc(n*sizeof(double));
}

int main(void)
{
	int n=0;
	printf("Type N: ");
	scanf("%d",&n);

	double* p=foo(n);
	double* q=p;

	while(p<q+n)
		scanf("%lf",p++);

	p--;

	double ave=0;

	while(q<=p)
		ave += *q++;

	printf("%lf\n",(ave/n));
}
