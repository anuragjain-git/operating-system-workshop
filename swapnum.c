#include <stdio.h>

int swap (int x, int y) {

	int temp = x;
	x = y;
	y = temp;
	
	printf("After swap x = %d and y = %d\n", x, y);
}

int main(void) {

	int x, y;
	printf("Enter x and y : ");
	scanf("%d%d", &x, &y);
	
	swap(x,y);
}
