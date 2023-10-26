#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *stringc(char* str1, char* str2) {
	char* str3=(char*)malloc((strlen(str1)+strlen(str2)+1)*sizeof(char));
	
	int i = 0;
	while(str1[i] != '\0') {
		str3[i] = str1[i];
		i++;
	}
	
	int j = 0;
	while(str2[j] != '\0') {
	str3[i] = str2[j];
		j++;
		i++;
	}
	
	str3[i] = '\0';
	
	return str3;
}

int main() {
	char str1[100], str2[100], *str3;
	printf("Enter string 1 :");
	gets(str1);
	printf("Enter string 2 :");
	gets(str2);
	
	str3 = stringc(str1,str2);
	printf("After String Concination:")
	puts(str3);
}
