#include<stdio.h>
int main()

{
        float nota1, nota2, nota3, soma ;

        printf ("Digite a primeira nota ");
        scanf ("%f%*c", & nota1);

        printf ("Digite a segunda nota ");
        scanf ("%f%*c", & nota2);

        printf ("Digite a terceira nota ");
        scanf ("%f%*c", & nota3);

        soma = (nota1 + nota2 + nota3)/3;


        printf ("A nota final %f eh", soma);

        getchar();
        return 0;

}
