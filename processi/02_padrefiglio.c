#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int p1 = fork();
    int p2 = fork();
    int p3 = fork();

    if (p > 0)
    {
        printf("\nSono il processo padre p1 e ho PID: %d\n", p1);
        printf("\nIl PID del figlio p2 è: %d\n", getpid1());
        printf("\nIl PID del figlio p3 è: %d\n", getpid2());
    }

    else if (p2 > 0)
    {
        printf("Sono il processo padre p2 e ho PID: %d\n", p2);
        printf("Il PID del figlio p4 è: %d\n", getpid4());
    }

    else if (p2 == 0)
    {
        printf("Sono il processo padre p2 e ho PID: %d\n", getppid2());
        printf("Il PID del figlio p4 è: %d\n", getpid4());
    }

    else if (p3 > 0)
    {
        printf("Sono il processo padre p3 e ho PID: %d\n", p2);
        printf("Il PID del figlio p5 è: %d\n", getpid5());
        printf("Il PID del figlio p6 è: %d\n", getpid6());
    }
    else if (p3 == 0)
    {
        printf("Sono il processo padre p3 e ho PID: %d\n", getppid3());
        printf("Il PID del figlio p5 è: %d\n", getpid5());
        printf("Il PID del figlio p6 è: %d\n", getpid6());
    }

    else if (p == 0)
    {
        printf("\nSono il processo padre e ho PID: %d\n", getppid1());
        printf("\nIl PID del figlio1 è: %d\n", getpid3());
        printf("\nIl PID del figlio2 è: %d\n", getpid2());
    }

    else
    {
        printf("Errore nella generazione del processo figlio p2 e p3");
    }
}