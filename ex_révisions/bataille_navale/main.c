#include "nav.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int min = 0;
    int max = 4;
    srand(time(NULL));
    int x_random = 0;
    int y_random = 0;
    x_random = (rand() % (max + 1 - min)) + min;
    y_random = (rand() % (max + 1 - min)) + min;
    int indice = 0;
    min = 1;
    max = 4;
    indice = (rand() % (max + 1 - min)) + min;
    int bat_x = 0;
    int bat_y = 0;
    switch (indice)
    {
    case 1:
        bat_x = x_random;
        bat_y = y_random - 1;
        if(bat_y < 0)
        {
            bat_y = bat_y + 2;
        }
        break;

    
    case 2:
        bat_x = x_random -1;
        bat_y = y_random;
        if(bat_x < 0)
        {
            bat_x = bat_x + 2;
        }
        break;
        break;

    case 3:
        bat_x = x_random;
        bat_y = y_random + 1;
        if(bat_y > 4)
        {
            bat_y = bat_y - 2;
        }
        break;

    case 4:
        bat_x = x_random + 1;
        bat_y = y_random;
        if(bat_x > 4)
        {
            bat_x = bat_x - 2;
        }
        break;
    }


    char tab[5][5];
    def_grille(tab);
    affichebataille(tab);
    int victoire = 1;
    while (victoire != 0)
    {
        int tir_x = 0;
        int tir_y = 0;
        printf("choissisez ligne ");
        scanf("%d",&tir_x);
        printf("choissisez colonne ");
        scanf("%d",&tir_y);
        touche(tab,tir_x,tir_y,bat_x,bat_y,x_random,y_random);
        victoire = victory(tab,bat_x,bat_y,x_random,y_random);
    }
    printf("vous avez gagne !!!");
    
    return 0;
}
