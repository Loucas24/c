#ifndef consommation
#define consommation

#include <stdlib.h>
#include <stdio.h>

void affiche_menu();
int lire_choix();
void initialiser(int tab[]);
int ajouterConsommation(int tab[]);
void afficheResume(int tab[]);
#endif