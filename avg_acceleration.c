#include <stdio.h>

int main(void) {

	float v0, v1, t, acceleration;
	
	printf("Enter v0, v1 and t: ");
	scanf("%f%f%f",&v0,&v1,&t);
	
	
	acceleration = (v1 - v0)/t;
	
	printf("The average acceleration  is %f\n", acceleration);
	return 0;

}
