#include<stdio.h>
#include<string.h>
#include<math.h>

int fonctiondemande()
{
    int a = 0;
    printf("Votre salaire annuel : ");
    scanf("%d",a);
    return a;
}

int main(){
    int sal_h = fonctiondemande();
    int sal_f = fonctiondemande();
    int sal_tot = 0;
    sal_tot = sal_f + sal_h;
    int imp_tot = 0;
    // imp_tot//
    if (sal_tot >= 177106)
    {
        imp_tot = ((sal_tot - 177106)*45/100) + imp_tot;
        sal_tot = sal_tot - 177106;
    }
    if (sal_tot >= 82342)
    {
        imp_tot = ((sal_tot - 82342)*41/100) + imp_tot;
        sal_tot = sal_tot - 82342;
    }
    if (sal_tot >=  28798)
    {
        imp_tot = ((sal_tot -  28798)*30/100) + imp_tot;
        sal_tot = sal_tot -  28798;
    }
    if (sal_tot >= 11295)
    {
        imp_tot = ((sal_tot - 11295)*11/100) + imp_tot;
        sal_tot = sal_tot - 11295;
    }
    int imp_f = 0;
    // imp_f//
    if (sal_f >= 177106)
    {
        imp_f = ((sal_f - 177106)*45/100) + imp_f;
        sal_f = sal_f - 177106;
    }
    if (sal_f >= 82342)
    {
        imp_f = ((sal_f - 82342)*41/100) + imp_f;
        sal_f = sal_f - 82342;
    }
    if (sal_f >=  28798)
    {
        imp_f = ((sal_f -  28798)*30/100) + imp_f;
        sal_f = sal_f -  28798;
    }
    if (sal_f >= 11295)
    {
        imp_f = ((sal_f - 11295)*11/100) + imp_f;
        sal_f = sal_f - 11295;
    }
    int imp_h = 0;
    // imp_h//
    if (sal_h >= 177106)
    {
        imp_h = ((sal_h - 177106)*45/100) + imp_h;
        sal_h = sal_h - 177106;
    }
    if (sal_h >= 82342)
    {
        imp_h = ((sal_h - 82342)*41/100) + imp_h;
        sal_h = sal_h - 82342;
    }
    if (sal_h >=  28798)
    {
        imp_h = ((sal_h -  28798)*30/100) + imp_h;
        sal_h = sal_h -  28798;
    }
    if (sal_h >= 11295)
    {
        imp_h = ((sal_h - 11295)*11/100) + imp_h;
        sal_h = sal_h - 11295;
    }


}