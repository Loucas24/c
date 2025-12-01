#include "ex1.h"
#include<stdlib.h>

void ecrire_dans_fichier(char nom[], int n1, int n2, int n3)
{
    FILE*f = fopen(nom,"w+");
    if (f== NULL)
    {
        printf("echec ouverture\n");
        return ;
    }

    fprintf(f,"%d\n%d\n%d",n1,n2,n3);
    fclose(f);

}

void lire_fichier(char nom[])
{
    FILE * f = fopen(nom,"r");

    int charCourant = fgetc(f) ;

    while(charCourant != EOF)
    {
        printf("%c",charCourant);
        charCourant = fgetc(f);
    }
    
    fclose(f);

}
