#include <stdio.h>

int main(void) {
	
	char ch;
	float num1, num2, res;

	printf("Enter two number and operation: ");
	scanf("%f %f", &num1, &num2);
	while ((getchar()) != '\n');
	
	printf("Enter the operation: ");
	scanf("%c", &ch);
	
	switch (ch) {
		case '+' :
			res = num1+num2;
			break;
		case '-' :
			res = num1-num2;
			break;
		case '*' :
			res = num1*num2;
			break;
		case '/' :
			res = num1/num2;
			break;
		default :
			printf("Error : ");
		
	}
	
	printf("%f\n",res);
	
	return 0;

}
