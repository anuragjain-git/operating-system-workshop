#include <stdio.h>

int swap1 (int x, int y) {

	int temp = x;
	x = y;
	y = temp;
	
}

int swap2(int a[]) {

	int temp = a[0];
	a[0] = a[1];
	a[1] = temp;

}

int main(void) {

	int x= 1, y = 2;
	int a[] = {1, 2};
	
	swap1(x,y);
	printf("%d %d\n", x,y);
	
	
	swap2(a);
	printf("%d %d\n", a[0],a[1]);
}
