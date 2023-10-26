#include<stdio.h>
#include<stdlib.h>

int main() {
	char *ch;
	ch = (char*)malloc(100*sizeof(char));
	printf("Enter a line:");
	gets(ch);
	int countChar = 0, countWord = 1; 
	for (int i = 0; ch[i]!='\0'; i++) {
		printf("%c", ch[i]);
		countChar++;
		if(ch[i] == ' ') {
			countChar--;
			countWord++;
		}
	}
	 
	printf("\n");
	printf("%s\n",ch);
	printf("Total char = %d, total word = %d",countChar,countWord);
	printf("\n");

	return 0;
}
