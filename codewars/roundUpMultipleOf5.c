#include <stdio.h>

int roundTo(int n){
	while(n%5 != 0)
		n++;
	return n;

}

int main(void){
	int n;
	printf("Type n:	");
	scanf("%d",&n);

	printf("%d\n",roundTo(n));
}
