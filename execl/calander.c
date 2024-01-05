#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

//extern char **environ;

int main(void) {
    __pid_t childpid = fork();

    // print may 2024 calander using execl

    if(childpid == 0) {
        execl("/bin/cal", "cal", "2024", NULL);
        perror("failed");
    }
    else {
        wait(NULL);
        printf("Chid terminated\n");
    }
    
    // print may 2024 calander using execv
    
    char *a[] = {"cal", "5", "2024", NULL};

    if(childpid == 0) {
        execv("/bin/cal", a);
        perror("failed");
    }
    else {
        wait(NULL);
        printf("Chid terminated\n");
    }   

    // print may 2024 calander using execvp

    char *a[] = {"cal", "5", "2024", NULL};

    if(childpid == 0) {
        execvp("cal", a);
        perror("failed");
    }
    else {
        wait(NULL);
        printf("Chid terminated\n");
    }  

    // print may 2024 calander using execlp

    if(childpid == 0) {
        execlp("cal", "cal", "5", "2024", NULL);
        perror("failed");
    }
    else {
        wait(NULL);
        printf("Chid terminated\n");
    }  
}