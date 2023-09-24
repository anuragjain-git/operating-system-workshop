#include <stdio.h>

int main(void) {

	float tempf, tempc;
	
	printf("Enter temperature in farenheit: ");
	scanf("%f",&tempf);
	
	
	tempc = ((tempf-32)/9.0)*5;
	
	printf("temperature in celcius is %f\n", tempc);
	return 0;

}
