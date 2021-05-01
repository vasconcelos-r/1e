#include<stdio.h>
int main()
{
    float sal,soma;
    printf ("Digite o salario");
    scanf ("%f%*c", & sal);

    soma= sal + sal *25/100;

    printf ("o salario %f foi para", soma);
    getchar ();
    return 0;
}
