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
    printf("========== Resume du jour ==========\n");
    printf("Eau       : %d\n",tab[0]);
    printf("Cafe      : %d\n",tab[1]);
    printf("Bonbons   : %d\n",tab[2]);
    printf("Gateau    : %d\n",tab[3]);
    printf("Legumes   : %d\n",tab[4]);
    printf("Fruits    : %d\n",tab[5]);
    printf("Proteines : %d\n",tab[6]);
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
