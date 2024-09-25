/* Una birreria a fine serata deve conteggiare l’incasso. La cassiera accende il software gestionale il quale le chiede di inserire una alla volta le consumazioni servite.
Le consumazioni si dividono in bevande e ristorazione. La cassiera per ogni consumazione deve inserire la tipologia di consumazione e il suo importo.

Quando la cassiera inserisce la stringa “esci” il software deve mostrare a video le seguenti informazioni:
1.	La media dell’incasso delle bevande
2.	La media dell’incasso della ristorazione
3.	Deve indicare se sono state vendute più bevande o più ristorazioni */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    char opzione[12] // posso fare anche un menu di scelta
    double mediaBev, mediaRist, sommaBev = 0, sommaRist = 0, importo;
    int nBev = 0, nRist = 0;

    do
    {

        do
        {

            printf("Inserisci la tipologia: ");
            scanf("%s", opzione);

        } while (strcmp("bevande", opzione) != 0 && strcmp("ristorazione", opzione) != 0 && strcmp("esci", opzione) != 0);

        do
        {

            printf("\nInserisci l'importo: ");
            scanf("%f", importo);

        } while (importo <= 0);

        if (strcmp("bevande", opzione) == 0)
        {

            nBev++;
            sommaBev += importo;

        }

        if (strcmp("ristorazione", opzione) == 0)
        {

            nRist++;
            sommaRist += importo;

        }

    } while (strcmp("esci", opzione) != 0);

    if (nRist > nBev)
        printf("Sono state vendute piu' ristorazioni");

    else if (nBev > nRist)
        printf("Sono state vendute piu' bevande");

    else
        printf("E' stato venduto lo stesso numero di bevande e ristorazioni");

    mediaBev = sommaBev / (double)bevande;
    mediaRist = sommaRist / (double)rist;

    printf("La media delle bevande è: %.2f\n", mediaBev);
    printf("La media delle ristorazioni è: %.2f\n", mediaRist);

    return 0;
}