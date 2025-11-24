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
    printf("Entrez le nombre d'eleves (1 a 30) : ");
    scanf("%d",&nb_eleve);
    while (nb_eleve < 1 || nb_eleve > 30)
    {
        printf("Valeur invalide\n");
        printf("Entrez le nombre d'eleves (1 a 30) : ");
        scanf("%d",&nb_eleve);
    }
    return nb_eleve;
    
}

void saisirNotes(int tab[30][3],int nb_eleve)
{
    printf("Saisie des notes pour %d eleves et 3 controles\n",nb_eleve);
    for(int i = 0 ; i < nb_eleve ; i ++)
    {
        printf("Eleve %d\n",i+1);
        for(int j = 0; j < 3 ; j++)
        {
            printf(" Note du controle %d (0 a 20): " ,j+1);
            scanf("%d",&tab[i][j]);
            while (tab[i][j] < 0 || tab[i][j] > 20)
            {
                printf("Note invalide\n");
                printf(" Note du controle %d (0 a 20): " ,j+1);
                scanf("%d",&tab[i][j]);
            }
                
        }
    }
} 

void afficherNotes(int tab[30][3],int nb_eleve)
{
    printf("Tableau des notes\n");
    printf("Eleve C1 C2 C3\n");
    for(int i = 0; i < nb_eleve; i++)
    {
        printf("    %d",i+1);
        for(int j = 0; j < 3; j++)
        {
            printf("  %d",tab[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int nb_eleve = 0;
    int tab[30][3] = {};
    while (1)
    {
    afficher_menu();
    int choix = lire_choix();
    switch (choix)
    {
        case 1:
            nb_eleve = saisirNombreEleves();
            break;

        case 2:
            saisirNotes(tab,nb_eleve);
            break;
        
        case 3:
            afficherNotes(tab,nb_eleve);
            break;

    }
    }
    return 0;
}


