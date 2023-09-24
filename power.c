#include <stdio.h>
#include <math.h>

int main(void) {

	int a,b;
	
	printf("Enter a and b: ");
	scanf("%d%d",&a,&b);
	
	
	int res = pow(a,b);
	
	printf("%d\n", res);
	return 0;

}

