#ifndef PHARMA
#define PHARMA

typedef struct 
{
    int prix;
    int ventes;
    int stock;
    int peremption_annee;
    int peremption_mois;
    int peremption_jour;
    int code;
    char nom[50];
    
}Medoc;

int tri_date_peremption(Medoc tab[80]);


#endif