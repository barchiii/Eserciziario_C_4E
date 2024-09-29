/* Dato N un numero intero positivo, generare e visualizzare in ordine crescente i numeri dispari
minori o uguali a N. */

#include <stdio.h>

int main (int argc, char* argv[])
{

    int num, i = 1;

    do
    {

        printf("Inserisci un numero:\n");
        scanf("%d", &num);

    } while (num < 0);

    printf("I numeri pari compresi tra %d e %d sono:", i, num);

    do
    {
        printf("%d\t", i);
        i += 2;

    } while (i <= num);

    return 0;
}