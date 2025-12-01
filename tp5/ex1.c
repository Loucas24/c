#include "ex1.h"
#include <stdlib.h>
#include <stdio.h>

void affiche_menu(){
    printf("==============================\n");
    printf("  Suivi de consommation\n");
    printf("==============================\n");
    printf("1. Ajouter une consommation\n");
    printf("2. Afficher le resume du jour\n");
    printf("3. Sauvegarder et quitter\n");
}

int lire_choix()
{
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d",&choix);
    return choix;
}

int initialiser(int tab[]){
    for(int i = 0; i < 6; i++)
    {
        tab[i] = 0;
    }
    return tab;
}
