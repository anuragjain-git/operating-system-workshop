#include <stdio.h>
#include <unistd.h>
#include <errno.h>
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

}



int main(int argc, char *argv[]) {

    pid_t childpid = 0;
    int i, n;
    
    if(argc !=2){
        fprintf(stderr, "Usage : %s process\n", argv[0]);
        return 1;
    }

    n = atoi(argv[i]);

    for(int i =0; i<n;i++) {
        if (childpid ==fork())
            break;
    }
    fprintf(stderr, "i : %d\n procss ID : %ld\n parent ID : %ld\n child ID :", (long)getpid());
}*/
int main() {
    //for(int i =0; i< 3;i++) 
    
    if(fork() || fork() && fork());
    printf("pid: %ld ppid : %ld \n", (long)getpid(), (long)getppid());
    
}