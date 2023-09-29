#include <stdio.h>

int fact(int n) {

	if (n==1 || n==0) {
	
		return 1;
	}
	
	return n*fact(n-1);
}

int com(int n, int r) {

	return (fact(n)/(fact(r)*fact(n-r)));

}

int main(void) {

	int res,n = 8;

	for(int i =1; i <=n; i++) {
	
		for(int j = n-i; j>0;j--){
			printf("  ");
		}
	
		for(int k = 0; k<i;k++){
			printf(" %2d ",com(i,k));
		}
		int r = 0;
		
		
		printf("\n");
		
		
	}

}
