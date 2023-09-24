#include <stdio.h>

int main(void) {

	int i, j, n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for (i = 1; i <= n; i++) {
	
		for (j = 1; j <= i; j++) {
	
			printf("%d ",j);
	
		}	
		printf("\n");
	}
	return 0;
}


// Output 
// 1
// 12
// 123
// 1234
