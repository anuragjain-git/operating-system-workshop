#include <stdio.h>

int main(void) {

	int n;
	printf("Enter a number between 1 and 4: ");
	scanf("%d",&n);
	switch(n) {
	case 1: printf("Hello\n");
		break;
	case 2: printf("Hii\n");
		break;
	case 3: printf("Bye\n");
		break;
	case 4: printf("Again\n");
		break;
	default: printf("Exit\n");
	
	return 0;
	}
}
