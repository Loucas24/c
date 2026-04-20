#include "test.h"
#include <stdio.h>


void affiche(Planete * liste)
{
    for(int i = 0; i < sizeof(liste); i++)
    {
        printf("%d planete : %s\n", i, liste[i].nom);
    }
}

void ajouter_pla(Planete * liste)
{
    char temp[50];
    
}

int main()
{
    while(1)
    {
        printf("=== Menu Principal ===\n");
        printf("1. Ajouter une planete\n");
        printf("2. Ajouter un satellite a une planete\n");
        printf("3. Supprimer une planete\n");
        printf("4. Supprimer un satellite d'une planete\n");
        printf("5. Afficher le systeme solaire\n");
        printf("6. Trier les planetes\n");
        printf("7. Quitter l'application\n");
        int choix;
        printf("Votre choix : ");
        scanf("%d",&choix);
        switch(choix)
        {
            case(1):

            case(2):

            case(3):

            case(4):

            case(5):

            case(6):

            case(7):
                return 0;
        }
    }
}