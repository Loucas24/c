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
    return montant;
    
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

