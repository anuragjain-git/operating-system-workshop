#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>\

void termination(){
    printf("Procss %ld terminated successfully\n",(long)getpid());
}

int main(int argc, char const *argv[]){
    if(atexit(termination)==-1){
        perror("Error: ");
        exit(0);
    }
    pid_t pid = fork();
    if(pid){
        printf("parent: %ld | PPID %d\n",(long)getppid(),getpid());
        sleep(5);
    }
    else{
        printf("child: %ld | PPID %d\n",(long)getppid(),atexit(termination));
        sleep(5);
    }
}