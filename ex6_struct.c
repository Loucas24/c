#include <stdio.h>
#include <string.h>

int main()
{
 //gcc test.c -o test.exe
    int n = 0;
    int res = 1;
    printf("Choissisez un nombre ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        res = res * i ;
    }
    printf("La factorielle de %d est %d",n,res);
    return 0;
}