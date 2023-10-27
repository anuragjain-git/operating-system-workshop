#include<stdio.h>
#include<string.h>

void stringreverse(char *str) {

	int len = strlen(str)-1;
	char temp;
	int i =0;
	
	while(i<len) {
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--; 
	}

}

int main() {
	char str[100];
	printf("Enter a line:");
	gets(str);
	stringreverse(str);
	
	puts(str);
}
