#include<stdio.h>
int main ()
{
    float dep, juros, ren, d_ren;
    printf ("Digite o Valor do deposito\t");
    scanf ("%f%*c", & dep);

    printf ("Digite o valor do juros\t");
    scanf ("%f%*c",& juros);

    ren= dep *(juros/100);
    d_ren= dep + ren;

    printf ("O valor total eh %f", d_ren);

    getchar ();
    return 0;
}
