# include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    
    if(pid) {
        printf("Line 1\n");
        printf("Line 3\n");
    }
    else {
        printf("Line 2\n");
        printf("Line 4\n");
    }
    return 0;
}