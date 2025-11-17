#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


int main(){
    int size = 0;
    printf("Choissisez la taille de votre etoile ( 5<= taille <= 10 et taille soit un entier)\n");
    scanf("%d",size);
    int width = 0;
    width = size * size;
    int max_height = 0;
    max_height = 3*size - 1;
    char img [width][max_height];

}