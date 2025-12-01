#include "ex1.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
    int tab[7];
    int choix = 0;
    initialiser(tab);
    charger("consommation.txt",tab);
    while (1)
    {
    affiche_menu();
    int choix = lire_choix();
    switch (choix)
    {
        case 1:
            ajouterConsommation(tab);
            sauvegarder("consommation.txt",tab);
            break;

        case 2:
            afficheResume(tab);
            break;
        
        case 3:
            return 0;
    }
    }
    return 0;
}