#include<stdio.h>
int main ()
{
    float base, altura, area;
    printf ("Digite a altura\t");
    scanf ("%f%*c", & altura);
    printf ("Digite a base\t");
    scanf ("%f%*c", & base);

    area= (altura*base)/2;

    printf ("A area  do triangulo eh %f\t", area);



    getchar ();
    return 0;
}
