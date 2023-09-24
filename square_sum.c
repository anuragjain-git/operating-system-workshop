#include <stdio.h>

int main(void) {
	
	int num;
	int res = 1;
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	while(num != 1) {
		res += num*num;
		num--;
	}
		
	printf("Square sum is %d\n", res);
	
	return 0;
}
