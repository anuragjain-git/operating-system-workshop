#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>
#include <semaphore.h>

int main() {
    sem_unlink("/s1");
    sem_unlink("/s2");
    sem_unlink("/s3");
    sem_unlink("/s4");


    pid_t pid = fork();

    sem_t *s1 = sem_open("/s1", O_CREAT, S_IRUSR | S_IWUSR, 0);
    sem_t *s2 = sem_open("/s2", O_CREAT, S_IRUSR | S_IWUSR, 0);
    sem_t *s3 = sem_open("/s3", O_CREAT, S_IRUSR | S_IWUSR, 1);
    sem_t *s4 = sem_open("/s4", O_CREAT, S_IRUSR | S_IWUSR, 1);

    if(pid) {
        pid_t pid2 = fork();
        if(pid2) {
            for(int i = 0; i < 3; i++)
            {
                sem_wait(s3);
                sem_wait(s4);
                printf("XX\n");
                sem_post(s1);
                sem_post(s2);
            }
        }
        else {
            for(int i = 0; i < 5; i++) {
                sem_wait(s1);
                printf("Y\n");
                sem_post(s4);
            }
        }
    }
    else {
        for(int i = 0; i < 3; i++)
            {
                sem_wait(s2);
                sem_wait(s4);
                printf("ZZ\n");
                sem_post(s1);
                sem_post(s3);
            }
    }
}
