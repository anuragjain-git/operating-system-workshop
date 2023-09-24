#include <stdio.h>

int main() {

	for(int i = 2; i<=50;i++) {
	
		int count =0;
		int n = i;
		for(int j = 2 ;j<=n/2;j++) {
	
			if(n%j==0) {
		
				count++;
		
			}
	
		}
	
		if(count==0) {
	
			printf("%d\n",n);
			
		}
		
	}
	return 0;
}

