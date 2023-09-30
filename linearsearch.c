#include <stdio.h>


int linearsearch(int a[], int size, int n) {


	for(int i = 0; i < size; i++) {
		if(a[i] == n) {
			return (i+1);
		}
	}
	return 0;
}

int main(void) {

	int size ,n;
	printf("Enter the size of array: ");
	scanf("%d", &size);

	int a[size];
	
	// Input array
	
	printf("Enter %d numbers: ", size); 
	
	for(int i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}
	
	//Input number to search
		
	printf("Enter the number to search: ");
	scanf("%d", &n);
	
	int res = linearsearch(a,size,n);
	if(res!=0) {
		printf("%d is present at %d position\n", n,res);
	}
	else {
		printf("%d is not present\n",n);
	}
	
	
	
}
