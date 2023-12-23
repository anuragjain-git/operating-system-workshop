#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "Hello Good Morning";
    
    char* token = strtok(str, "d");
    char *strtok(char* str, const char * d){
    while(*str) {
        prev = str;
        if(*str==*d) {
            *str = '\0';
        }
        str++;
    }
    return prev;
}}