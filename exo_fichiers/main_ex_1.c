#include "ex1.h"
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    ecrire_dans_fichier("nbre.txt",a,b,c);
    lire_fichier("nbre.txt");

    return 0;
}