#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
    pid_t chpid[3] = 0;
    int st;
    for (int i = 0; i < 2; i++)
    {
        chpid[i] = fork();
        if (chpid[i])
        {
            printf("Parent pid = %d and chpid= %d\n", getpid(), chpid[i]);
        }
        else
        {
            if (i == 0)
            {
                for (int j = 0; i < 100; i++)
                {
                    printf("\tChild_1 pid = %d and chpid= %d\n", getpid(), chpid[i]);
                }
            }
            if (i == 1)
            {
                for (int j = 0; i < 100; i++)
                {
                    printf("\tChild_1 pid = %d and chpid= %d\n", getpid(), chpid[i]);
                }
            }
        }
    }
    pid_t = waitpid(chpid[0], );
    return 0;
}
