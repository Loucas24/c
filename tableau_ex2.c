#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
    int tab[] = {1.1,2.8,3.4,4.98,5.65};
    float res = tab[0];
    for( int i = 0; i<5;i++)
    {
        if (res<tab[i])
        {
            res = tab[i];
        }
    }
    printf("%f",res);
    return 0;
}