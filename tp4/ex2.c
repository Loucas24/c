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

int saisir_montant()
{
    int montant = 0;
    printf("Montant à retirer : ");
    scanf("%d",&montant);
    montant_valide(montant);
    return montant;
}

void montant_valide(int montant)
{
    while (montant%5 != 0)
    {
        printf("Erreur : montant invalide\n");
        printf("Le montant doit etre entre 5 et 1000 euros, divisible par 5. ");
        printf("Montant à retirer : ");
        scanf("%d",&montant);
    }
    while (montant< 5)
    {
        printf("Erreur : montant invalide\n");
        printf("Le montant doit etre entre 5 et 1000 euros, divisible par 5. ");
        printf("Montant à retirer : ");
        scanf("%d",&montant);
    }
    while (montant>1000)
    {
        printf("Erreur : montant invalide\n");
        printf("Le montant doit etre entre 5 et 1000 euros, divisible par 5. ");
        printf("Montant à retirer : ");
        scanf("%d",&montant);
    }
}

void nombre_billets(int montant)
{
    int indice = 0;
    while (montant >= 50)
    {
        montant = montant - 50;
        indice = indice+1;
    }
    printf("%d billets de 50 euros\n");
    indice = 0;
    while (montant >= 20)
    {
        montant = montant - 20;
        indice = indice+1;
    }
    printf("%d billets de 20 euros\n");
    indice = 0;
    while (montant >= 10)
    {
        montant = montant - 10;
        indice = indice+1;
    }
    printf("%d billets de 10 euros\n");
    indice = 0;
    while (montant >= 5)
    {
        montant = montant - 5;
        indice = indice+1;
    }
    printf("%d billets de 5 euros\n");
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
            break;

        case 2:
            return 0;

    }
    }
    return 0;
}

