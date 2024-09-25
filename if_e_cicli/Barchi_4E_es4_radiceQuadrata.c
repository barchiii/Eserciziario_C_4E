/* Progettare un algoritmo che effettui la lettura da tastiera di una serie
   di coppie di valori numerici reali (sia positivi che negativi che zero).
   Per ciascuna coppia, l’algoritmo deve calcolare e stampare il valore
   della radice quadrata del rapporto tra il valore maggiore e quello
   minore dei due. Il programma termina quando vengono inseriti dei valori
   che non permettono di svolgere il calcolo nel dominio dei numeri reali.
   Prima di terminare si richiede di stampare un messaggio che indichi la
   ragione per cui non è stato possibile svolgere il calcolo. */

    #include <stdio.h>
    #include <math.h> //funzioni matematiche

    int main() 
    {

        int n1, n2;
        double rapporto, radice;

        do
        {
            
            printf("Inserisci n1:\n");
            scanf("%d", &n1);
            printf("Inserisci n2:\n");
            scanf("%d", &n2);

            if (n1 > n2)
            {
                if (n2 == 0)
                {
                    printf("La divisione è impossibile perché il divisore non può essere 0");
                    break;
                }
                rapporto = n1 / n2;
            }
            else
            {
                if (n1 == 0)
                {
                    printf("La divisione è impossibile perché il divisore non può essere 0");
                    break;
                }
                rapporto = n2 / n1;
            }

            if (rapporto > 0)
            {
                radice = sqrt(rapporto);
                printf("La radice è: %.2f\n\n", radice); //prendo due decimale
            }

        } while (rapporto > 0);

        printf("Il radicale non esiste in quanto il radicando è negativo\n\n");

        return 0;
    }