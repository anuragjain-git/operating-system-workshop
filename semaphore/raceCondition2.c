# include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    char str1[] = "Hello World";
    char str2[] = "Bye World";
    
    if(pid) {
        for(int i =0;str1[i]!= NULL;i++) {
            fprintf(stderr,"%c",str1[i]);
        }
    }
    else {
        for(int i =0;str2[i]!=NULL;i++) {
            fprintf(stderr,"%c",str2[i]);
        }
    }
    return 0;
}
