#include <stdio.h>
#include <string.h>

int main()
{
 //gcc test.c -o test.exe
    int jour = 0;
    printf("choissisez votre nombre entier : ");
    scanf("%d",&jour);
    switch (jour)
    {
    case 1:
        printf("C'est lundi");
        break;
    
    case 2:
        printf("C'est mardi");
        break;

    case 3:
        printf("C'est mercredi");
        break;
    
    case 4:
        printf("C'est jeudi");
        break;
    
    case 5:
        printf("C'est vendredi");
        break;

    case 6:
        printf("C'est samedi");
        break;

    case 7:
        printf("C'est dimanche");
        break;

    default:
        printf("il n'y a que 7 jours dans une semaine boloss");
        break;
    }
    
    return 0;
}