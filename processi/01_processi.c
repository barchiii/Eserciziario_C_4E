#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv) 
{
    int p = fork();

    if(p > 0) {
        printf("\nSono il processo padre con PID: %d\n", getpid());
        printf("\nIl PID del figlio è: %d\n", p);
    }
    else if(p == 0) {
        printf("\nSono il processo padre con PID: %d\n", getpid());
        printf("\nIl PID del figlio è: %d\n", getppid());
    }
    else {
        printf("\nErrore nella generazione del processo figlio");
    }

    return 0;
}