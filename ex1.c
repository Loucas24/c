#include <stdio.h>

int main()
{
 //gcc test.c -o test.exe
    
    float c = 0.0f;
    float f = 0.0f;
    printf("Entrez la temperature en celsius ");
    scanf("%f",&c);
    f = (c*9/5)+32;
    printf(" %f",f);





    return 0;
}