#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"

void tri_date_peremption(Medoc tab[80])
{
    Medoc * n = malloc(sizeof(Medoc)*80);
    if(n == NULL)
    {
        return 0;
    }

    for(int j = 0; j < 80; j++)
    {
        for(int i =0; i < 79; i++)
        {
            if(n[i].peremption_annee > n[i+1].peremption_annee)
            {
                Medoc temp = n[i];
                n[i] = n[i+1];
                n[i+1] = n[i];
            }
            if(n[i].peremption_annee == n[i+1].peremption_annee)
            {
                if(n[i].peremption_mois > n[i+1].peremption_mois)
                {
                    Medoc temp = n[i];
                    n[i] = n[i+1];
                    n[i+1] = n[i];
                }
                if(n[i].peremption_mois == n[i+1].peremption_mois)
                {
                    if(n[i].peremption_jour > n[i+1].peremption_jour)
                    {
                        Medoc temp = n[i];
                        n[i] = n[i+1];
                        n[i+1] = n[i];
                    }
                }
            }
        }
    }


}