#include "ex1.h"
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <time.h>

void affiche_menu(){
    printf("==============================\n");
    printf("  Suivi de consommation\n");
    printf("==============================\n");
    printf("1. Ajouter une consommation\n");
    printf("2. Afficher le resume du jour\n");
    printf("3. Afficher les objectifs et le score\n");
    printf("4. Sauvegarder et quitter\n");
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
    printf("2. Café ☕\n");
    printf("3. Bonbons 🍬\n");
    printf("4. Gateau 🍰\n");
    printf("5. Légumes 🥦\n");
    printf("6. Fruits 🍎\n");
    printf("7. Protéines 🍗\n");
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
    printf("Café      : %d ☕",tab[1]);
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
        printf("Légumes   : %d 🥦 😭",tab[4]);
        afficherBarre(tab[4],10);
    }
    else if (humeurlegumes == 1)
    {
        printf("Légumes   : %d 🥦 🙂",tab[4]);
        afficherBarre(tab[4],10);
    }
    else
    {
        printf("Légumes   : %d 🥦 😎",tab[4]);
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
    printf("Protéines : %d 🍗",tab[6]);
    afficherBarre(tab[6],10);
    printf("====================================\n");
}

int charger(char nom[], int tab[])
{
    FILE*f = fopen(nom,"r");
    if (f== NULL)
    {
        printf("echec ouverture\n");
        return 0;
    }
    fscanf(f,"%d %d %d %d %d %d %d",&tab[0],&tab[1],&tab[2],&tab[3],&tab[4],&tab[5],&tab[6]);
    fclose(f);

}

int sauvegarder(char nom[], int tab[])
{
    FILE*f = fopen(nom,"w+");
    if (f== NULL)
    {
        printf("echec ouverture\n");
        return 0;
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

void objectifscore(int tab[],int objectif[])
{
    printf("====== Obejectif du jour ======\n");
    printf("Categorie Objectif Atteint ?\n");
    if (tab[0] >= objectif[0])
    {
       printf("Eau :  8  ✅\n"); 
    }
    else
    {
       printf("Eau :  8  ❌\n");  
    }
    printf("Café : - (pas d'objectif)\n");
    printf("Bonbons : - (pas d'objectif)\n");
    printf("Gateau : - (pas d'objectif)\n");
    if (tab[4] >= objectif[4])
    {
       printf("Légumes :  5  ✅\n"); 
    }
    else
    {
       printf("Légumes :  5  ❌\n");  
    }
    if (tab[5] >= objectif[5])
    {
       printf("Fruits :  3  ✅\n"); 
    }
    else
    {
       printf("Fruits :  3  ❌\n");  
    }
    if (tab[6] >= objectif[6])
    {
       printf("Protéines :  2  ✅\n"); 
    }
    else
    {
       printf("Protéines :  2  ❌\n");  
    }
    int scorefinal = 0;
    scorefinal = calculerScoreSante(tab,objectif);
    printf("Score de santé du jour : %d /100\n",scorefinal);
    printf("===============================\n");

}

int calculerScoreSante(int tab[],int objectif[])
{
    int scorebase = 50;
    if (tab[0]>=objectif[0])
    {
        scorebase = scorebase + 10;
    }
    if (tab[4]>=objectif[4])
    {
        scorebase = scorebase + 10;
    }
    if (tab[5]>=objectif[5])
    {
        scorebase = scorebase + 10;
    }
    if (tab[6]>=objectif[6])
    {
        scorebase = scorebase + 10;
    }
    if (tab[3] >5)
    {
        int malus_max = 0;
        malus_max = malus_max + (tab[3]/5);
        if (malus_max > 15)
        {
            malus_max = 15;
        }
        scorebase = scorebase - malus_max;
    }
    if (tab[2] >3)
    {
        int malus_max = 0;
        malus_max = malus_max + (tab[2]/3);
        if (malus_max > 20)
        {
            malus_max = 20;
        }
        scorebase = scorebase - malus_max;
    }
    if (scorebase<=0)
    {
        scorebase = 0;
    }
    if (scorebase>=100)
    {
        scorebase = 100;
    }
    return scorebase;
}
