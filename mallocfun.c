#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n;
	int remove;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	printf("Enter the element to remove: ");
	scanf("%d",&remove);
	
	int *a = (int *) malloc(n * sizeof(int));
	
	printf("Enter elements: ");
	for(int i = 0; i < n; i++) {
		scanf("%d",&a[i]);
	}
	
	p(ptr, n);
	delete(ptr, n, remove);
	p(ptr, n);
}

void delete(int *a, int *n, int remove) {
	int m;
	
	for(int i = 0; i < *n; i++) {
		if(a[i] == k) {
			m = i;
			i--;
			*n = *n -1;
			for(int j = m;j<*n;j++) {
				a[j] = a[j+1];
			}
		}
	}
}

void p(int *a, int n) {
	for(int i = 0; i < n; i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
}
