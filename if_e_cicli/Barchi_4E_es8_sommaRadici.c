/* Progettare un algoritmo che risolve il seguente problema. Si desidera 
   calcolare la somma delle radici quadrate di N valori numerici inseriti 
   dall’utente, con N inserito in input. 
   L’algoritmo deve stampare la somma calcolata. L’algoritmo deve terminare
   con un messaggio di errore quando viene inserito un numero che non
   permette di effettuare il calcolo (nel dominio dei numeri reali). */


    #include <stdio.h>
    #include <math.h>

    int main (int argc, char* argv[]) 
    {
        int N, num, i = 0;
        double somma = 0;

        do
        {

            printf("\nInserisci N maggiore di 0: ");
            scanf("%d", &N);

        } while (N <= 0);

        do
        {
            
            printf("\nInserisci il numero %d maggiore di 0: ", i + 1);
            scanf("%d", &num);
            i++

            if (num >= 0)
                somma += sqrt(num);

            else
                printf("\nNon puoi fare una radice di un numero negativo\n");

        } while (i < N && num >= 0);

        printf("La somma dei numeri e': %d", somma);

        return 0;

    }