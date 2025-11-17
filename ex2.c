#include <stdio.h>

int main()
{
 //gcc test.c -o test.exe
    int j = 0;
    int m = 0;
    int a = 0;
    printf("Entrez le jour de votre naissance ");
    scanf("%d",&j);
    printf("Entrez le mois de votre naissance ");
    scanf("%d",&m);
    printf("Entrez l'annee de votre naissance ");
    scanf("%d",&a);
    printf("Vous etes nee le %d/%d/%d",j,m,a);





    return 0;
}