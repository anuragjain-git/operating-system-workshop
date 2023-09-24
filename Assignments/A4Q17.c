#include <stdio.h>

int main(void) {

	int i, j, k, m, n;
	
	for (i = 1; i <= 10; i++) {
	
		for (j = 1; j <= 10; j++) {
	
			if (j % i == 0 || i % j == 0) {
			
				printf("* ");
			
			}
			
			else {
			
			printf("  ");
			
			}
	
		}
			
		printf("\n");
	}
	return 0;
}


// Output 
//     1
//   1 2 1
// 1 2 3 2 1
