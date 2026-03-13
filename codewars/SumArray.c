#include<stdio.h>
#include<stdlib.h>

double sum_array(double* values,int count)
{
	double sum=0;
	for(double* p=values; p < values+count; p++)
		sum+=*p;
	return sum;
}

int main()
{
	int count=0;
	printf("count: ");
	scanf("%d",&count);
	double values[count];
	for(int i=0;i<count;i++)
	{
		printf("Values %d: ",i+1);
		scanf("%lf",&values[i]);
	}
	printf("%lf\n",sum_array(values,count));
}
