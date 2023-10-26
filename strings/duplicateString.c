#include<stdio.h>
#include<stdlib.h>

char *stringcopy(const char* str) {
	
	int i = 0;
	while(str[i]!='\0') {
		i++;
	}

	char *str2 = (char*)malloc((i+1)*sizeof(char));
	
	i = 0;
	while(str[i]!='\0') {
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return str2;
}

int main() {
	char str[100], *str2, *str3;
	printf("Enter a string :");
	gets(str);
	
	str2 = stringcopy(str);
	str3 = str;
	
	printf("Duplicate string:");
	puts(str2);
	puts(str3);
}
