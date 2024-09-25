/* Progettare un algoritmo che effettui le seguenti operazioni:
    • legga da tastiera una coppia di valori interi A e B con A<B;
    • continui a leggere da tastiera una serie di valori interi, terminando 
        quando il valore letto è al di fuori dell’intervallo [A, B];
    • conteggi la media dei valori letti;
    • prima di terminare, stampi il valore calcolato. */

    #include <stdio.h>

    int main()
    {

        int a, b, num, somma = 0;
        int i = 0; //contatore
        double media;

        do
        {
            printf("Inserisci a:\n");
            scanf("%d", &a);
            printf("Inserisci b:\n");
            scanf("%d", &b);

        } while (a > b);

        do 
        {
            printf("Inserisci numero: \n");
            scanf("%d", &num);

            if (num >= a && num <= b)
            {
                somma += num;
                i++;
            }

        } while (num >= a && num <= b);

        media = (double)somma / (double)i;
        printf("La media è: %d", media);

        return 0;
    }