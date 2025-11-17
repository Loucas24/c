#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int tab[] = {1,2,3,4,5};
    for( int i = 0; i<5;i++)
    {
        printf("%d,",tab[i]);
    }
    printf("\n");
    int temp[5];
    int taille = sizeof(tab)/sizeof(tab[0]);
    for( int i = taille-1;i>=0;i--)
    {
        temp[taille-i-1] = tab[i];
    }
    return 0;
}