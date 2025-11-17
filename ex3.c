#include <stdio.h>
#include <string.h>

int main()
{
 //gcc test.c -o test.exe
    char mois[] = "12";
    char animal[] = "raton laveur";
    char acteur[] = "Louis De Funes";
    int lenghtact = strlen(acteur);
    printf("Votre pseudonyme est %c%c%c%c%c%c%c",animal[0],animal[1],acteur[lenghtact-3],acteur[lenghtact-2],acteur[lenghtact-1],mois[0],mois[1]);
    return 0;
}