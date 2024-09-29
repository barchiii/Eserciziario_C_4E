/* Dato N un numero intero positivo, generare e visualizzare in ordine
crescente i numeri compresi maggiori uguali di -N e minori uguali di N. */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int num;

    do
    {

        printf("Inserisci un numero:\n");
        scanf("%d", &num);

    } while (num <= 0);

    for (int i = -num; i <= num; i++)
    {
        printf("%d", i);
    }

    return 0;
}