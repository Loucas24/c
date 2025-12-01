#include "ex1.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
    int choix = 0;
    while (1)
    {
    affiche_menu();
    int choix = lire_choix();
    switch (choix)
    {
        case 1:
            break;

        case 2:
            break;
        
        case 3:
            return 0;
    }
    }
    return 0;
}