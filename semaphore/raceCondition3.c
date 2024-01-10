# include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    int a = 50;
    int b = 0;

    if(pid) {
        b=a-30;
        printf("parent: %d\n", b);
    }
    else {
        a=a+b;
        printf("chld: %d\n",a);
    }
    return 0;
}