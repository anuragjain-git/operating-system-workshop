#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Duplicate string using inbuild function

int main() {
	char str[100], *str2, *str3;
	printf("Enter a string :");
	gets(str);
	
	int i = 0;
	while(str[i]!='\0') {
		i++;
	}

	str2 = (char*)malloc((i+1)*sizeof(char));
	
	str2 = strcpy(str2, str);
	strcpy(str2, str);
	
	printf("Duplicate string:");
	puts(str2);
	
}
