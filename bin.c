#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    int res = 0;
    char nb[100]  = "";
    printf("Choissisez un nombre binaire (seulement 0 ou 1) : \n");
    scanf("%s",&nb);
    int len = 0;
    len = strlen(nb);
    for (int i = len-1;i>=0;i--)
    {
      if (nb[i]== '1') 
      {
        res = res + pow(2,len-i-1);
      }
    }
    printf("Votre resultat est %d ",res);
    return 0;
}