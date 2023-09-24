#include <stdio.h>

int main(void) {

	float a, b, sum;
	
	printf("Enter first and second data: ");
	scanf("%f%f",&a,&b);
	
	
	sum = a+b;
	
	printf("The sum of %f and %f is %f\n", a, b, sum);
	return 0;

}
