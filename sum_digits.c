#include <stdio.h>

int main(void) {

	int num, result;
	
	printf("Enter a number between 0 and 1000: ");
	scanf("%d",&num);
	
	
	result = num%10;
	num=num/10;
	result = result + (num%10);
	num=num/10;
	result=result+num;
	
	printf("The sum of the digits is %d\n", result);
	return 0;

}
