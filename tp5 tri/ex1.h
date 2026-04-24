#ifndef PHARMA
#define PHARMA

typedef struct {
    char nom[50];
    int code;
    int jour_fabric;
    int mois_fabric;
    int annee_fabric;
    int jour_peremp;
    int mois_peremp;
    int annee_peremp;
    float prix;
    int nbvendus;
    int nbstock;
}Medoc;
int datePerempPlusGrand(Medoc d1, Medoc d2);



#endif