#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
    for (int i = 0;i<5;i++)
    {
        float alea = ((float)rand()/(float)RAND_MAX)*100;
        printf("%f",alea);
    }
    return 0;
}