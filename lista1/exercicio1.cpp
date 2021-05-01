#include<stdio.h>
int main ()
{
     int n1,n2,n3,n4,soma;

    printf ("Digite um numero");
    scanf ("%d%*c", & n1);
    printf ("Digite segundo numero");
    scanf ("%d%*c", & n2);
    printf ("Digite terceiro numero");
    scanf ("%d%*c", & n3);
    printf ("Digite quarto numero");
    scanf ("%d%*c", & n4);
    soma = n1 + n2 + n3 + n4;
    printf ("O resultado %d da soma eh",soma);
    getchar ();
    return 0;
}
