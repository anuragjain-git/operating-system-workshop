
#include <stdio.h>

int main(void) {

	int num;
	
	printf("Enter a number : ");
	scanf("%d",&num);
	
	int rem,sum=0;
	
	while(num != 0) {
		
		
		rem = num % 10;
		num = num / 10;
		sum = sum * 10 + rem;
		
	}
	
	printf("%d\n",sum);
	
	return 0;

}
