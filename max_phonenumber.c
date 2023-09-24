#include <stdio.h>

int main (void) {

	int n1,n2,n3,n4;
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	
	int max,secmax;
	
	if(n1>n2 && n1>n3 && n1>n4) {
		max = n1;		
	}
	else if(n2>n1 && n2>n3 && n2>n4) {
		max = n2;	
	}
	else if(n3>n1 && n3>n2 && n3>n4) {
		max = n3;
	}
	else {
		max = n4;
	}
	
	secmax = -963456;
	
	if(n1!= max && n1 > secmax) {
		secmax = n1;
	}
	else if(n2!= max && n2 > secmax) {
		secmax = n2;
	}
	else if(n3!= max && n3 > secmax) {
		secmax = n3;
	}
	else if(n4!= max && n4 > secmax) {
		secmax = n4;
	}
	
	printf("max = %d and secmax = %d\n", max, secmax);
	
	return 0;
}


