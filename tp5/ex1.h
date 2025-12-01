#ifndef consommation
#define consommation

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <time.h>

void affiche_menu();
int lire_choix();
void initialiser(int tab[]);
int ajouterConsommation(int tab[]);
void afficheResume(int tab[]);
int charger(char nom[], int tab[]);
int sauvegarder(char nom[], int tab[]);
int humeurBonbons(int tab[]);
int humeurLegumes(int tab[]);
int humeurFruits(int tab[]);
void afficherBarre(int valeur,int max);
void objectifscore(int tab[],int objectif[]);
int calculerScoreSante(int tab[],int objectif[]);
#endif