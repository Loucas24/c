#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"

int datePerempPlusGrand(Medoc d1, Medoc d2)
{
    if(d1.annee_peremp > d2.annee_peremp)
    {
        return 1;
    }
    if(d1.annee_peremp == d2.annee_peremp && d1.mois_peremp > d2.mois_peremp)
    {
        return 1;
    }
    if(d1.annee_peremp == d2.annee_peremp && d1.mois_peremp == d2.mois_peremp && d1.jour_peremp > d2.jour_peremp)
    {
        return 1;
    }
    return 0;
}

void saisirTab(Medoc tab[], int n)
{
    if(tab == NULL)
    {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        printf("\nMédicament %d\n", i + 1);

        printf("Nom : ");
        scanf("%s", tab[i].nom);

        printf("Code : ");
        scanf("%s", tab[i].code);

        printf("Date fabrication (jj) : ");
        scanf("%d",&tab[i].jour_fabric);

        printf("Date fabrication (mm) : ");
        scanf("%d",&tab[i].mois_fabric);

        printf("Date fabrication (aaaa) : ");
        scanf("%d",&tab[i].annee_fabric);

        printf("Date peremption (jj) : ");
        scanf("%d",&tab[i].jour_peremp);

        printf("Date peremption (mm) : ");
        scanf("%d",&tab[i].mois_peremp);

        printf("Date peremption (aaaa) : ");
        scanf("%d",&tab[i].annee_peremp);

        printf("Prix : ");
        scanf("%f", &tab[i].prix);

        printf("Nombre vendu : ");
        scanf("%d", &tab[i].nbvendus);

        printf("Stock restant : ");
        scanf("%d", &tab[i].nbstock);
    }
}

void tribulles(Medoc tab[], int n)
{
    if(tab == NULL)
    {
        return 0;
    }
    Medoc temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (datePlusGrande(tab[j], tab[j + 1]) == 1) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int rechercheDichotomique(Medoc tab[], int n, char nomRecherche[])
{
    if(tab == NULL)
    {
        return 0;
    }
    int debut = 0, fin = n - 1, milieu;

    while (debut <= fin){
        milieu = (debut + fin) / 2;

        int cmp = strcmp(tab[milieu].nom, nomRecherche);

        if (cmp == 0) {
            return milieu;
        } 
        else if (cmp < 0) {
            debut = milieu + 1;
        } 
        else {
            fin = milieu - 1;
        }
    }

    return -1;
}

void medicamentPlusCher(Medoc tab[], int n)
{
    Medoc max = tab[0];

    for (int i = 1; i < n; i++) {
        if (tab[i].prix > max.prix) {
            max = tab[i];
        }
    }

    printf("\n=== Médicament le plus cher ===\n");
    printf("Nom : %s\n", max.nom);
    printf("Code : %d\n", max.code);
    printf("Prix : %.2f\n", max.prix);
}





int main(){
    Medoc * tab = malloc(sizeof(Medoc)*80);

    saisirTab(tab, 80);
    tribulles(tab, 80);

    int pos = rechercheDichotomique(tab, 80, "paracetamol");

    if (pos != -1)
    {
        printf("Médicament trouvé à la position %d\n", pos);
    } 
    else{
        printf("Médicament non trouvé\n");
    }

    medicamentPlusCher(tab, 80);

    free(tab);
    tab = NULL;
    return 0;
}