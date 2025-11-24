#include<stdio.h>
#include<string.h>
#include<math.h>

void fonction()
{
    printf("Bonjour\n");
}

void fonction2(int n)
{
    for(int i = 0; i<n;i++)
    {
        fonction();
    }
}

int fonction3(char tab[50])
{
    int i = 0;
    while(tab[i] != '\0')
    {
        i++;
    }
    return i;
}

int main(){
    fonction();
    fonction2(4);
    char mot[] = " blabla bloblo";
    int taille = fonction3(mot);
    printf("la chaine %s a une longueur de %d\n",mot,taille);

    char mot2[] = "veuykzdfai";
    int taille2 = fonction3(mot2);
    printf("la chaine %s a une longueur de %d\n",mot2,taille2);

    return 0;
}

