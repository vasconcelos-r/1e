#include<stdio.h>
int main()
{
    float sal_b, sal_r, grati, imp;
    printf("\nDigite o salario\t");
    scanf ("%f%*c", & sal_b);

    grati= sal_b * 5/100;
    imp= sal_b * 7/100;
    sal_r= sal_b + grati - imp;

    printf ("O salario a receber eh %f", sal_r);



    getchar ();
    return 0;
}
