#include <stdio.h>
#include <string.h>

int main()
{
 //gcc test.c -o test.exe
    int n = 0 ;
    int calcul = 0;
    printf("choisir nombre entier : ");
    scanf("%d",&n);
    for(int i = 1;i<=10;i++)
    {
      calcul = i * n;
      printf("%d * %d = %d \n",n,i,calcul);
    }


    
    return 0;
}