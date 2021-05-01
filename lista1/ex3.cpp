#include<stdio.h>
int main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, soma;
    printf ("Digite a 1 nota");
    scanf ("%f%*c", & nota1);

    printf("Digite a 2 nota");
    scanf ("%f%*c", & nota2);

    printf ("Digite a 3 nota");
    scanf ("%f%*c", & nota3);

    printf ("Digite o peso da 1 nota");
    scanf ("%f%*c", & peso1);

    printf ("Digite o peso da 2 nota");
    scanf ("%f%*c", & peso2);

    printf ("Digite o peso da 3 nota");
    scanf ("%f%*c", & peso3);

    soma = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1 + peso2 + peso3);

    printf ("A media %d eh", soma);



    getchar();
    return 0;
}
