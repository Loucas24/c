#ifndef TESTE
#define TESTE

typedef struct
{
    float distance;
    char nom[50];

}Planete;

typedef struct
{
    char name[50];
    int liste[50];
}Satellite;


void affiche(Planete * nom);
void ajouter_pla(Planete * liste);

#endif



