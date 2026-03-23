#include "ex1.h"
#include <stdio.h>

int main()
{
    int tab[2][3];
    for(int i = 0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("choisissez temperature %d de la %d ville : ",j+1,i+1);
            scanf("%d",&tab[i][j]);
        }
    }
    int variation_ville1,variation_ville2 = 0;
    variation_ville1 = calculvariation(tab,1);
    variation_ville2 = calculvariation(tab,2);
    printf("%d %d\n",variation_ville1,variation_ville2);
    int choix_ville = 0;
    choix_ville = choix(variation_ville1,variation_ville2);
    printf("Le meilleur choix possible avec le moins de variations thermique est la ville %d",choix_ville);
    return 0;
}