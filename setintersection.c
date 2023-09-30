#include <stdio.h>

int intersection(int a1[], int a2[], int sizea1, int sizea2) {

	for(int i = 0; i < sizea1; i++) {
		for(int j = 0; j < sizea2; j++) {
			if(a1[i] == a2[j]) {
				printf("%d ",a2[j]);
			}
		}
	}
	printf("\n");
}

int main(void) {

	int a1[] = {1, 2, 3, 4, 5};
	int a2[] = {8, 2, 6, 4};
	
	int sizea1 = 5, sizea2 = 4;
	
	if(size1 <= size2) {
		intersection(a1, a2, sizea1, sizea2);
	}
	
	else {
		intersection(a2, a1, sizeas, size1);
	}
}
