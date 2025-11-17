#include <stdio.h>
#include <string.h>

int main()
{
 //gcc test.c -o test.exe
    char phrase[100] ;
    printf("Creer une phrase ");
    scanf("%s",&phrase);
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    int y = 0;
    int j = 0;
    for (int j = 0; j <= strlen(phrase); j++)
    {
      if(phrase[j] == 'a')
      {
        a++;
      }
      else if(phrase[j] == 'e')
      {
        e++;
      }
      else if(phrase[j] == 'i')
      {
        i++;
      }
      else if(phrase[j] == 'o')
      {
        o++;
      }
      else if(phrase[j] == 'u')
      {
        u++;
      }
      else if(phrase[j] == 'y')
      {
        y++;
      }
      else
      {
        continue;  
      }
      
    }
    printf("il y a %d de a, %d de e, %d de i, %d de o, %d de u, %d de y",a,e,i,o,u,y);
    
    return 0;
}