#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();
    sem_t *sem1 = sem_open("/sem1", O_CREAT, S_IRUSR | S_IWUSR, 1);
    sem_t *sem2 = sem_open("/sem2", O_CREAT, S_IRUSR | S_IWUSR, 0);

    if(pid) {
        int i = 0;
        while(i<5) {
            sem_wait(sem1);
            printf("00\n");
            i++;
            sem_post(sem2);
        }
    }
    else {
        int i =0;
        while(i<5) {
            sem_wait(sem2);
            printf("11\n");
            i++;
            sem_post(sem1);
        }
    }
}