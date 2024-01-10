#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <semaphore.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    sem_unlink("/sem1");
    sem_unlink("/sem2");

    pid_t pid = fork();

    sem_t *sem1 = sem_open("/sem1", O_CREAT, S_IRUSR | S_IWUSR, 1);
    sem_t *sem2 = sem_open("/sem2", O_CREAT, S_IRUSR | S_IWUSR, 0);

    if(pid) {
        while (1)
        {
            sem_wait(sem1);
            printf("1\n");
            sleep(1);
            sem_post(sem2);
            sem_wait(sem1);
            printf("3\n");
            sleep(1);
            sem_post(sem2);
        }
    }
    else {
        while (1)
        {
            sem_wait(sem2);
            printf("2\n");
            sleep(1);
            sem_post(sem1);
            sem_wait(sem2);
            printf("4\n");
            sleep(1);
            sem_post(sem1);        
            }
        }
    }
