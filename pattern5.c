#include <stdio.h>

int main(void) {

	int i, j, k, c, n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for (i = 1; i <= n; i++) {
	
		for (j = 1; j <= n-i; j++) {
	
			printf("  ");
	
		}
		
		for (k = 1; k <= i; k++) {
	
			printf("%d ",k);
		}
		
		for (m = i - 1; m >= 1; m--) {
	
			printf("%d ",m);
	
		}
			
		printf("\n");
	}
	return 0;
}


// Output 
//     1
//   1 2 1
// 1 2 3 2 1
