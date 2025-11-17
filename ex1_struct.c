#include <stdio.h>
#include <string.h>

int main()
{
 //gcc test.c -o test.exe
    int n = 0;
    int res = 0;
    printf("Choissisez un nombre");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        res += i ;
    }
    printf("%d",res);
    return 0;
}