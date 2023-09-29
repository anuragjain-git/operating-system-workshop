#include <stdio.h>

int main(void) {


	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);

	int a[n], sum = 0;
	float avg;
	
	// Input
	
	printf("Enter %d numbers: ", n); 
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	// sum
	
	for(int i = 0; i < n; i++) {
		sum = sum + a[i];
	}
	printf("sum = %d\n", sum);
	
	// average
	
	avg = sum / n;
	printf("average = %f\n", avg);

}
