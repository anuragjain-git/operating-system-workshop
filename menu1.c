#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
	return a+b;
}
int subtract(int a, int b){
	return a-b;
}
int multiplication(int a, int b){
	return a*b;
}


int main(void) {
	int op1, op2, res;
	char choice;
	
	do {
		
		printf("+ : Addition\n- : Subtraction\n* : Multiplication\nq : Quit\n");
		
		printf("Please choice any one: ");
		scanf(" %c", &choice);
		
		if(choice == 'q') {
			break;
		}
		else {
			printf("Enter two number: ");
			scanf("%d%d", &op1, &op2);
	
			switch(choice) {
				case '+' : res = sum(op1,op2);
						printf("result = %d\n\n", res);
						break;
				case '-' : res = subtract(op1,op2);
						printf("result = %d\n\n", res);
						break;
				case '*' : res = multiplication(op1,op2);
						printf("result = %d\n\n", res);
						break;
			
				default : printf("Invalid choice, Try Again.\n");
			}
		}
	}
	while(1);
	printf("Hello\n");
	return 0;
}
