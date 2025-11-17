#include <stdio.h>
#include <string.h>

int main()
{
 //gcc test.c -o test.exe
    int n = 0;
    int i = 1;
    printf("choissisez votre nombre entier : ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d \n",i);
        i++;
    }
    
    return 0;
}