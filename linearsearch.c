#include <stdio.h>

int main(void) {

	int n,n1;
	printf("Enter the size of array: ");
	scanf("%d", &n);

	int a[n];
	
	// Input
	
	printf("Enter %d numbers: ", n); 
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
		
	printf("Enter the number to search: ");
	scanf("%d", &n1);
	
	for(int i = 0; i < n; i++) {
		if(a[i] == n1) {
			printf("%d is present at %d", a[i],i);
		}
		else {
			printf("Not Present");
		}
	}
}
