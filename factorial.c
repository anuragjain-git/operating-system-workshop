#include <stdio.h>

int main(void) {
	
	int num;
	int res=1;
	
	printf("Enter a number : ");
	scanf("%d", &num);
	
	while(num != 1) {
		res = num*res;
		num--;
	}
		
	printf("Factorial is %d\n", res);
	
	return 0;
}
