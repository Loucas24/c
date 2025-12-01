#include "ex1.h"
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>

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

void initialiser(int tab[]){
    for(int i = 0; i < 7; i++)
    {
        tab[i] = 0;
    }
}

int ajouterConsommation(int tab[]){
    int choix = 0;
    int quantite = 0;
    printf("Quelle categorie voulez vous modifier\n");
    printf("\n");
    printf("1. Eau 💧\n");
    printf("2. Cafe ☕\n");
    printf("3. Bonbons 🍬\n");
    printf("4. Gateau 🍰\n");
    printf("5. Legumes 🥦\n");
    printf("6. Fruits 🍎\n");
    printf("7. Proteines 🍗\n");
    printf("Votre choix : ");
    scanf("%d",&choix);
    switch (choix)
    {
        case 1:
            printf("Combien d unites ajouter ? ");
            scanf("%d",&quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour\n");
            break;

        case 2:
            printf("Combien d unites ajouter ? ");
            scanf("%d",&quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour\n");
            break;

        case 3:
            printf("Combien d unites ajouter ? ");
            scanf("%d",&quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour\n");
            break;

        case 4:
            printf("Combien d unites ajouter ? ");
            scanf("%d",&quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour\n");
            break;

        case 5:
            printf("Combien d unites ajouter ? ");
            scanf("%d",&quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour\n");
            break;

        case 6:
            printf("Combien d unites ajouter ? ");
            scanf("%d",&quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour\n");
            break;
        
        case 7:
            printf("Combien d unites ajouter ? ");
            scanf("%d",&quantite);
            tab[choix-1] = tab[choix-1] + quantite;
            printf("Consommation mise a jour\n");
            break;

    }
}

void afficheResume(int tab[]){
    int humeurbonbon = 0;
    humeurbonbon = humeurBonbons(tab);
    int humeurlegumes = 0;
    humeurbonbon = humeurLegumes(tab);
    int humeurfruits = 0;
    humeurbonbon = humeurFruits(tab);
    printf("========== Resume du jour ==========\n");
    printf("Eau       : %d 💧",tab[0]);
    afficherBarre(tab[0],10);
    printf("Cafe      : %d ☕",tab[1]);
    afficherBarre(tab[1],10);
    if (humeurbonbon == 0)
    {
        printf("Bonbons   : %d 🍬 😇",tab[2]);
        afficherBarre(tab[2],10);
    }
    else if (humeurbonbon == 1)
    {
        printf("Bonbons   : %d 🍬 🙂",tab[2]);
        afficherBarre(tab[2],10);
    }
    else if (humeurbonbon == 2)
    {
        printf("Bonbons   : %d 🍬 😕",tab[2]);
        afficherBarre(tab[2],10);
    }
    else
    {
        printf("Bonbons   : %d 🍬 👿",tab[2]);
        afficherBarre(tab[2],10);
    }

    printf("Gateau    : %d 🍰",tab[3]);
    afficherBarre(tab[3],10);

    if (humeurlegumes == 0)
    {
        printf("Legumes   : %d 🥦 😭",tab[4]);
        afficherBarre(tab[4],10);
    }
    else if (humeurlegumes == 1)
    {
        printf("Legumes   : %d 🥦 🙂",tab[4]);
        afficherBarre(tab[4],10);
    }
    else
    {
        printf("Legumes   : %d 🥦 😎",tab[4]);
        afficherBarre(tab[4],10);
    }

    if (humeurfruits == 0)
    {
        printf("Fruits    : %d 🍎 😢",tab[5]);
        afficherBarre(tab[5],10);
    }
    else if (humeurfruits == 1)
    {
        printf("Fruits    : %d 🍎 🙂",tab[5]);
        afficherBarre(tab[5],10);
    }
    else
    {
        printf("Fruits    : %d 🍎 😄",tab[5]);
        afficherBarre(tab[5],10);
    }
    printf("Proteines : %d 🍗",tab[6]);
    afficherBarre(tab[6],10);
    printf("====================================\n");
}

void charger(char nom[], int tab[])
{
    FILE*f = fopen(nom,"r");
    if (f== NULL)
    {
        printf("echec ouverture\n");
        return ;
    }
    fscanf(f,"%d %d %d %d %d %d %d",&tab[0],&tab[1],&tab[2],&tab[3],&tab[4],&tab[5],&tab[6]);
    fclose(f);

}

void sauvegarder(char nom[], int tab[])
{
    FILE*f = fopen(nom,"w+");
    if (f== NULL)
    {
        printf("echec ouverture\n");
        return ;
    }
    fprintf(f,"%d %d %d %d %d %d %d\n",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5],tab[6]);
    fclose(f);

}

int humeurBonbons(int tab[])
{
    int humeur = 0;
    if (0 <= tab[2] <= 3)
    {
        humeur = 0;
    }
    else if (4 <= tab[2] <= 7)
    {
        humeur = 1;
    }
    else if (8 <= tab[2] <= 12)
    {
        humeur = 2;
    } 
    else
    {
        humeur = 3; 
    }
}

int humeurLegumes(int tab[])
{
    int humeur = 0;
    if (0 <= tab[4] <= 2)
    {
        humeur = 0;
    }
    else if (3 <= tab[4] <= 5)
    {
        humeur = 1;
    }
    else
    {
        humeur = 2; 
    }
}

int humeurFruits(int tab[])
{
    int humeur = 0;
    if (0 <= tab[5] <= 4)
    {
        humeur = 0;
    }
    else if (5 <= tab[5] <= 8)
    {
        humeur = 1;
    }
    else
    {
        humeur = 2; 
    }
}

void afficherBarre(int valeur, int max)
{
    if (max<=0)
    {
        max = 1;
    }
    if (valeur >= max)
    {
        valeur = max;
    }
    if (valeur <= 0)
    {
        valeur = 0;
    }
    int casesPleines = 0;
    casesPleines = (valeur*10)/max;
    for(int i = 0;i < 10;i++)
    {
        if (i < casesPleines)
        {
            printf("█");
        }
        else
        {
            printf("░");
        }
    }
    printf("\n");
}
