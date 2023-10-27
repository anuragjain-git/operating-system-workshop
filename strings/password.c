#include<stdio.h>
#include<string.h>

int verifypass(char *str) {
	
	int valid =0;
	int len = strlen(str);
	if(len<8 || len>16) {
		printf("Invalid length\n");
	}
	else {
		valid++;
	}

	int countUpper = 0;
	int countDigit = 0;
	int countLower = 0;
	int countSpecial = 0;
	for (int i = 0; str[i]!='\0'; i++) {
	int a = (int)(str[i]);
		if(a>=65 && a<=90) {
			countUpper+=1;
		}
		else if(a<=57 && a>=48) {
			countDigit+=1;
		}
		else if(a<=122 && a>=97) {
			countLower+=1;
		}
		else {
			countSpecial+=1;
		}
	}

	if(countUpper==0) {
		printf("There should be atleast 1 uppercase\n");
	}
	else {
		valid++;
	}
	if(countSpecial<2) {
		printf("There should be atleast 2 special character\n");
	}
	else {
		valid++;
	}
	if(countDigit<2) {
		printf("There should be atleast 2 digits\n");
	}
	else {
		valid++;
	}
	return valid;
}

int main() {
	char str[100];
	printf("Enter Password:");
	gets(str);
	int flag = verifypass(str);
	
	if(flag==4){
		printf("valid Password\n");
	}	
}




