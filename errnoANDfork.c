#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

/*
int main() {
    int n = 0;
    while(n!=100){
        errno = n;
        printf("%d \n", n);
        perror("Error");
        n++;
    }
}


int main() {
    int fd = 3;
    if(close(fd) == -1) {
        perror("Error");
        printf("Error: %s\n", strerror(errno));
    }
    return 0;
}

int main() {
    int x;
    x = 0;
    fork();
    x = 1;
    printf("I am process %ld and my x is %d\n", (long)getpid(), x);
    printf("parent processid %ld\n", (long)getppid());
return 0;

}*/

int main() {
    for(int i =0;i<3;i++){
        
        printf("Hello\n");
        fork();
        
    }
}