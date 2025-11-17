#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int nb = 0;
    char res[100] = "";
    int j = 0;
    printf("Choissisez un nombre entier : \n");
    scanf("%d",&nb);
    while (nb - pow(2,j) > 0 )
    {
        j++;
    }
    for (int i = j; i>=0; i--)
    {
        if (nb - pow(2,i) >= 0)
        {
            strcat(res,"1");
            nb = nb - pow(2,i);
        }
        else
        {
            strcat(res,"0");
        }
    }
    printf("votre resultat est %s",res);
    return 0;
}