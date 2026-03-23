#include "nav.h"
#include <stdlib.h>
#include <stdio.h>
void def_grille(char tab[5][5])
{
    for(int i = 0; i<5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            tab[i][j] = 'o';
        }
    }
}


void affichebataille(char tab[5][5])
{
    for(int i = 0; i<5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            printf("%c",tab[i][j]);
        }
        printf("\n");
    }
}

void touche(char tab[5][5],int tir_x,int tir_y,int bat_x,int bat_y,int x_random,int y_random)
{
    if ((tir_x == bat_x && tir_y == bat_y) || (tir_x == x_random && tir_y == y_random))
    {
        tab[tir_x][tir_y] = 'z';
        affichebataille(tab);
    }
    else
    {
        tab[tir_x][tir_y] = 'x';
        affichebataille(tab);
    }
}

int victory(char tab[5][5],int bat_x,int bat_y,int x_random,int y_random)
{
    if(tab[bat_x][bat_y] == 'z' && tab[x_random][y_random] == 'z')
    {
        return 0;
    }
}
