#ifndef bataille
#define bataille

#include <stdlib.h>

void affichebataille(char tab[5][5]);
void def_grille(char tab[5][5]);
int victory(char tab[5][5],int bat_x,int bat_y,int x_random,int y_random);
void touche(char tab[5][5],int tir_x,int tir_y,int bat_x,int bat_y,int x_random,int y_random);

#endif