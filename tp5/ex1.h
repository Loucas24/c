#ifndef consommation
#define consommation

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>

void affiche_menu();
int lire_choix();
void initialiser(int tab[]);
int ajouterConsommation(int tab[]);
void afficheResume(int tab[]);
void charger(char nom[], int tab[]);
void sauvegarder(char nom[], int tab[]);
int humeurBonbons(int tab[]);
int humeurLegumes(int tab[]);
int humeurFruits(int tab[]);
#endif