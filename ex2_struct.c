#include <stdio.h>
#include <string.h>

int main()
{
 //gcc test.c -o test.exe
    float nb1 = 0;
    float nb2 = 0;
    char ope = ' ';
    float res = 0;
    printf("choissisez votre nombre entier 1 : ");
    scanf("%f",&nb1);
    printf("choissisez votre nombre entier 2 : ");
    scanf("%f",&nb2);
    printf("choissisez operation : ");
    getchar();
    scanf("%c",&ope);
    if(ope == '+')
    {
        res = nb1 + nb2;
        printf("%.0f",res);
    }
    else if (ope == '-')
    {
        res = nb1 - nb2;
        printf("%.0f",res);
    }
    else if (ope == '*')
    {
        res = nb1 * nb2;
        printf("%.0f",res);
    }
    else
    {
        res = nb1/nb2;
        printf("%.2f",res);
    }
    return 0;
}