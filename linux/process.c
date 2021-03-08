#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main (void){
    pid_t pid;

    pid = fork();

    if (pid <0){
        fprintf(stderr, "Falha no fork");
        exit(-1);
    } else if (pid == 0){
        printf("Pai chama o filho para exec \n\n\r");
        execlp("/bin/ls","ls",NULL);
    } else {
        wait(NULL);
        printf("\n\rFilho completou a exec \n\r");
        exit(0);
    }
}