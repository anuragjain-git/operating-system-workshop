#include <stdio.h>

int sumOfTwoNumber(int,int);

int main(void) {

	int res;
	res = sumOfTwoNumber(10,20);
	printf("sum is %d\n",res);
	return 0;

}

int sumOfTwoNumber(int a, int b) {
	
	int c = a + b;
	return c;
	
}
