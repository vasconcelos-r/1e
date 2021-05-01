#include<stdio.h>
int main ()
{
    float sal_b, sal_r, imp;
    printf("\nDigite o salario\t");
    scanf ("%f%*c", & sal_b);


    imp= sal_b * 10/100;
    sal_r= sal_b +50 - imp;

    printf("O salario a rebecer eh %f", sal_r);

    getchar ();
    return 0;
}
