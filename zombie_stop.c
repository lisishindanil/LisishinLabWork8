#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void sighandler(int sig){
        printf("Signal handler for signal = %d\n", sig);
        wait(0);
}

int main (void)
{
                int i;
                signal(SIGCHLD, &sighandler);
                pid_t pid = fork();
        if (pid == 0){
                        printf("I am child with pid=%d. My parent pid=%d\n", ge$
                        sleep (6);
                        printf("Child of Lisishin is finished. My parent pid=%d$
                        _exit(0);
        }
                else{
               fprintf(stderr,"the parent start ...\n");
               for (i=0;i<15; i++){
                       printf("I am parent with pid=%d, My child pid=%d\n", get$
                        sleep (1);
               }
               fprintf(stderr,"the parent finish ...\n");
        }
return EXIT_SUCCESS;
}
