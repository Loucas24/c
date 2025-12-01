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
    printf("Votre choix :");
    scanf("%d",&choix);
    switch (choix)
    {
        case 1:
            printf("Combien d unites ajouter ?");
            scanf("%d",&quantite);
            tab[choix] = tab[choix] + quantite;
            printf("Consommation mise a jour");
            break;

        case 2:
            printf("Combien d unites ajouter ?");
            scanf("%d",&quantite);
            tab[choix] = tab[choix] + quantite;
            printf("Consommation mise a jour");
            break;

        case 3:
            printf("Combien d unites ajouter ?");
            scanf("%d",&quantite);
            tab[choix] = tab[choix] + quantite;
            printf("Consommation mise a jour");
            break;

        case 4:
            printf("Combien d unites ajouter ?");
            scanf("%d",&quantite);
            tab[choix] = tab[choix] + quantite;
            printf("Consommation mise a jour");
            break;

        case 5:
            printf("Combien d unites ajouter ?");
            scanf("%d",&quantite);
            tab[choix] = tab[choix] + quantite;
            printf("Consommation mise a jour");
            break;

        case 6:
            printf("Combien d unites ajouter ?");
            scanf("%d",&quantite);
            tab[choix] = tab[choix] + quantite;
            printf("Consommation mise a jour");
            break;
        
        case 7:
            printf("Combien d unites ajouter ?");
            scanf("%d",&quantite);
            tab[choix] = tab[choix] + quantite;
            printf("Consommation mise a jour");
            break;

    }
}
