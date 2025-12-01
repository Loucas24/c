#include "ex1.h"
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <time.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
    int objectif[7] = {8,0,0,0,5,3,2};
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
            objectifscore(tab,objectif);
            break;

        case 4:
            sauvegarder("consommation.txt",tab);
            return 0;
    }
    }
    return 0;
}