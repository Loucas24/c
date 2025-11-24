#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void afficher_menu()
{
    printf("===== GESTION DES NOTES =====\n");
    printf("1. Saisir le nombre d'eleves\n");
    printf("2. Saisir les notes des eleves\n");
    printf("3. Afficher toutes les notes\n");
    printf("4. Afficher la moyenne d'un eleve\n");
    printf("5. Afficher la moyenne generale\n");
    printf("6. Afficher la meilleure note d'un controle\n");
    printf("0. Quitter\n");
}

int lire_choix()
{
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d",&choix);
    return choix;
}

int saisirNombreEleves()
{
    int nb_eleve = 0;
    printf("Entrez le nombre d'eleves (1 à 30) : ");
    scanf("%d",&nb_eleve);
    while (nb_eleve < 1 || nb_eleve > 30)
    {
        printf("Valeur invalide\n");
        printf("Entrez le nombre d'eleves (1 à 30) : ");
        scanf("%d",&nb_eleve);
    }
    return nb_eleve;
    
}

int main(){
    afficher_menu();
    int choix = lire_choix();
    switch (choix)
    {
        case 1 :
        {
            int nb_eleve = saisirNombreEleves();
        }
    }
    return 0;
}


