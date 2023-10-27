#include<stdio.h>

void stringlower(char *str) {
	for (int i = 0; str[i]!='\0'; i++) {
	int a = (int)(str[i]);
		if(a>=65 && a<=90) {
			a+=32;
			str[i]=(char)(a);
		}
	}

}

int main() {
	char str[100];
	printf("Enter a line:");
	gets(str);
	stringlower(str);
	
	puts(str);
}
