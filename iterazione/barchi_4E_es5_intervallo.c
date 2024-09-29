/* Dati due numeri interi positivi N1 e N2 con N2>N1, generare e
visualizzare in ordine crescente i numeri interi compresi
nell'intervallo chiuso [N1,N2]. */

#include <stdio.h>

int main(int argc, char *argv[])
{

    int n1, n2;

    do
    {
        printf("Inserisci n1\n");
        scanf("%d", &n1);
        printf("Inserisci n2\n");
        scanf("%d", &n2);

    } while (n1 < 0 || n2 <= n1);

    while (n1 <= n2)
    {

        printf("%d\t", n1);
        n1++;

    }

    return 0;
}