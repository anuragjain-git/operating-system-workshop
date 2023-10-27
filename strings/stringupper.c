#include<stdio.h>

void stringupper(char *str) {
	for (int i = 0; str[i]!='\0'; i++) {
	int a = (int)(str[i]);
		if(a<=122 && a>=97) {
			a-=32;
			str[i]=(char)(a);
		}
	}

}

int main() {
	char str[100];
	printf("Enter a line:");
	gets(str);
	stringupper(str);
	
	puts(str);
}
