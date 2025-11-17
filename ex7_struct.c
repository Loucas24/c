#include <stdio.h>
#include <string.h>

int main()
{
 //gcc test.c -o test.exe
    int n = 0;
    printf("Choissisez un nombre ");
    scanf("%d",&n);
    printf("je vais afficher un carre de taille %d \n",n );
    for(int i = 1;i <=n ;i++)
    {
        for(int j = 1;j<=n;j++)
        {
          printf("o");
        }
        printf("\n");
    }
    return 0;
}