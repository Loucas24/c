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
        printf("valeur non conforme, reessayez( 5<= taille <= 10 et taille soit un entier)\n");
        scanf("%d",&size); 
    }
    
    int width = 0;
    width = size * size;
    int max_height = 0;
    max_height = 3*size - 1;
    char img [110][110];
    for(int i = 0 ; i < max_height ; i++)
    {
        for(int j = 0 ; j < width ; j++)
        {
            img[i][j] = ' ';
        }

    }
    int mid = 0;
    mid = width / 2;

    //pointe etoile
    for(int i = 0 ; i < size ; i++)
    {
        if(i == size-1)
        {
            for(int j = 0 ; j < width ; j++)
            {
                img[i][j] = '_';
            }
            
        }
        
        for(int j = 0 ; j < i * 2 + 1 ; j++)
        {
            if (j == 0 || j == i * 2)
            {
                img[i][mid + (j-i)] = 'A';
            }
            else
            {
                img[i][mid + (j-i)] = 'S';
            }
            
        }
        
    }

    //corps etoile
    for(int i = size ; i< size*2 -2 ; i++)
    {
        int taille = 0;
        taille = 2*i - 2*size;
        for(int j = taille ; j < width - taille ; j++)
        {
            img[i][j] = 'S';
            if (j == taille || j == width - taille - 1)
            {
                img[i][j] = '.';
            }
        }
        
    }





//affichage image
    for (int i = 0 ; i < max_height ; i++)
    {
        for(int j = 0 ; j < width ; j++)
        {
            printf("%c",img[i][j]);
        }
        printf("\n");
    }
    
    



    return 0;
}