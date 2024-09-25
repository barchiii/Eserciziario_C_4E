/* Progettare un algoritmo che effettui le seguenti operazioni:

    • continui a leggere da tastiera una serie di terne di valori interi A ,
    B e C finchè non vengono inseriti dei valori tali per cui A + B < C
    • conteggi il numero di volte in cui la differenza tra A e B è pari, dispari, e quando è nulla
    • prima di terminare, visualizzi il valore dei valori conteggiati */

    #include <stdio.h>

    int main()
    {

        int a, b, c;
        int differenza, pari = 0, dispari = 0, nulli = 0;

        do
        {
            printf("Inserisci a:\n");
            scanf("%d", &a);
            printf("Inserisci b:\n");
            scanf("%d", &b);
            printf("Inserisci c:\n");
            scanf("%d", &c);

            differenza = a - b;

            if (differenza % 2 == 0)
            {
                pari++;
            }
            else if (differenza % 2 != 0)
            {
                dispari++;
            }
            else
                nulli++;
        } while (a + b >= c);

        printf("Pari : %d\n\n", pari);
        printf("Dispari : %d\n\n", dispari);
        printf("Nulli : %d\n\n", nulli);

        return 0;
    }