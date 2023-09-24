#include <stdio.h>
#include <math.h>

int main(void) {

	int res, num, i, length, num1;
	for(i = 1; i <= 10000; i++) {
		
		num1 = i;
		length = 0;
		
		while(num1 != 0) {
			num1=num1/10;
			length++;
		}
		
		res = 0;
		num = i;
		while(num > 0) {
			res += pow((num%10), (length));
			num = num / 10;
		}
		
		if(res == i) {
		
			printf("%d\n", res);
		
		}
	}
	
	return 0;
}ma
