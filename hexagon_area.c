#include <stdio.h>
#include <math.h>

int main(void) {

	float side, area;
	
	printf("Enter the side: ");
	scanf("%f",&side);
	
	
	area = (3*sqrt(3)*side*side)/2;
	
	printf("The area of the hexagon is %f\n", area);
	return 0;

}

