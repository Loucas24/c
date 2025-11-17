#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>


int main(){
    int size = 0;
    printf("Choissisez la taille de votre etoile ( 5<= taille <= 10 et taille soit un entier)\n");
    scanf("%d",&size);
    while (size < 5 || size > 10)
    {
        printf("valeur non conforme ( 5<= taille <= 10 et taille soit un entier)\n");
        scanf("%d",&size); 
    }
    
    int width = 0;
    width = size * size;
    int max_height = 0;
    max_height = 3*size - 1;
    char img [110][30];
    for(int i = 0 ; i < max_height ; i++)
    {
        for(int j = 0 ; j < width ; j++)
        {
            img[j][i] = ' ';
        }

    }
    //for (int i = 0 ; i < max_height ; i++)
    //{
    //    for(int j = 0 ; j < width ; j++)
    //    {
    //        printf("%c",img[i][j]);
    //    }
    //}
    int mid = 0;
    mid = width / 2;
    
    



    return 0;
}