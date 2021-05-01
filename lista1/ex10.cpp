#include<stdio.h>
int main ()
{
    float area, raio;
    printf ("Digite o raio\t");
    scanf ("%f%*c", & raio);

    area= 3.1415 *raio*raio;

    printf ("A area do circulo eh %f\t", area);

    getchar ();
    return 0;
}
