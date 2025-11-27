#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void afficher_menu()
{
    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1. Faire un retrait\n");
    printf("2. Quitter\n");
}

int lire_choix()
{
    int choix = 0;
    printf("Votre choix : ");
    scanf("%d",&choix);
    return choix;
}

int saisir_montant(int montant)
{
    printf("Montant a retirer : ");
    scanf("%d",&montant);
    return montant;
}

void montant_valide(int montant)
{
    if (montant >= 5 && montant <= 1000 && montant % 5 == 0)
    {
        printf("Montant valide\n");
    }
    else
    {
        while (montant < 5)
        {
            printf("Erreur : montant invalide\n");
            printf("Le montant doit etre entre 5 et 1000 euros, divisible par 5.\n");
            printf("Montant a retirer : ");
            scanf("%d",&montant);
        }
        while (montant%5 != 0)
        {
            printf("Erreur : montant invalide\n");
            printf("Le montant doit etre entre 5 et 1000 euros, divisible par 5.\n");
            printf("Montant a retirer : ");
            scanf("%d",&montant);
        }
        while (montant > 1000)
        {
            printf("Erreur : montant invalide\n");
            printf("Le montant doit etre entre 5 et 1000 euros, divisible par 5.\n");
            printf("Montant a retirer : ");
            scanf("%d",&montant);
        }    
    }
}

void nombre_billets(int montant)
{
    int indice_50 = 0;
    int indice_20 = 0;
    int indice_10 = 0;
    int indice_5 = 0;
    while ((montant - 50) >= 0)
    {
        montant = montant - 50;
        indice_50 = indice_50 + 1;
        printf("%d",indice_50);
    }
    while ((montant - 20) >= 0)
    {
        montant = montant - 20;
        indice_20  = indice_20 + 1;
        printf("%d",indice_20);
    }
    while ((montant - 10) >= 0)
    {
        montant = montant - 10;
        indice_10 = indice_10 + 1;
        printf("%d",indice_10);
    }
    while ((montant - 5) >= 0)
    {
        montant = montant - 5;
        indice_5 = indice_5 +1;
        printf("%d",indice_5);
    }
    printf("%d billets de 50 euros\n",indice_50);
    printf("%d billets de 20 euros\n",indice_20);
    printf("%d billets de 10 euros\n",indice_10);
    printf("%d billets de 5 euros\n",indice_5);
}



int main(){
    int montant = 0;
    while (1)
    {
    afficher_menu();
    int choix = lire_choix();
    switch (choix)
    {
        case 1:
            saisir_montant(montant);
            montant_valide(montant);
            nombre_billets(montant);
            break;

        case 2:
            return 0;

    }
    }
    return 0;
}

