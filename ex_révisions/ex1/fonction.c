#include "ex1.h"

int calculvariation(int tab[2][3],int indice_ville)
{
    int variation = 0;
    for(int j = 1;j<3;j++)
    {
        int var = tab[indice_ville-1][j] - tab[indice_ville-1][j-1];
        if(var < 0)
        {
            var = var * (-1);
        }
        variation = variation + var;
    }
    return variation;
}

int choix(int variation1,int variation2)
{
    if(variation1 < 0)
    {
        variation1 = variation1 * (-1);
    }
    if(variation2 < 0)
    {
        variation2 = variation2 * (-1);
    }
    if(variation1 <= variation2)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}