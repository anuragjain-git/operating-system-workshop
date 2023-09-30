#include <stdio.h>

void arrinput(int a[], int size, int pos, int n) {
	
	int temp;
	pos = pos-1;
	
	// Input elements from pos 
	
	for(int i = size-1; i>pos; i--) {
		a[i] = a[i-1];
	}
	
	a[pos] = n;
	
	// Print the array
	
	for(int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main(void) {
	
	int size,n,pos;
	
	printf("Enter the size of array: ");
	scanf("%d", &size);
	
	size = size + 1;
	
	int a[size];
	
	// Input array
	
	printf("Enter %d numbers: ", size-1); 
	
	for(int i = 0; i < size-1; i++) {
		scanf("%d", &a[i]);
	}
	
	// input number and position to insert 
	 
	printf("Enter the number and position to insert: ");
	scanf("%d%d", &n,&pos);
	
	arrinput(a, size, pos, n);
}


