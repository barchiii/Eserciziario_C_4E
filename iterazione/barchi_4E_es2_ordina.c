/* Dato N un numero intero positivo, generare e visualizzare in ordine crescente i primi N numeri
interi positivi. */

#include <stdio.h>

int main(int argc, char* argv[])
{

    int num, i = 0;

    do
    {

        printf("Inserisci un numero:\n");
        scanf("%d", &num);

    } while (num <= 0);

    do
    {
        i++;
        printf("%d\n", i);

    } while (i < num);

    return 0;
}