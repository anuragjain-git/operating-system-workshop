#include <stdio.h>
#include <stdbool.h>


int palinprime(int n) {

	int reverse = 0,remainder;
	int num = n;
	int x = n;

	while (n != 0) {
    		remainder = n % 10;
    		reverse = reverse * 10 + remainder;
    		n /= 10;
  	}
  	
  	
  	int rem1,rem2;
  	bool res = true;
  	
  	while (num != 0) {
  	
  		rem1 = num % 10;
  		num = num / 10;
  		rem2 = reverse % 10;
  		reverse = reverse / 10;
  		if(rem1 != rem2) {
  		
  			res = false;
  		
  		}
  		
  	}
	
	if(res == true) {
		printf("%d\n", x);
	}
}

int main(void) {

	for(int i = 10; i<=1000;i++) {
	
		int count =0;
		int n = i;
		for(int j = 2 ;j<=n/2;j++) {
	
			if(n%j==0) {
		
				count++;
		
			}
	
		}
	
		if(count==0) {
			palinprime(n);
			
		}
		
	}
}

