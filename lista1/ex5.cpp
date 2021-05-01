#include<stdio.h>
int main ()
{
    float sal,per, aumen, nsal;
    printf ("Digite o salario");
    scanf ("%f%*c" , & sal);

    printf("Digite o percentual de aumento");
    scanf ("%f%*c",& per);

    aumen = sal * per/100;
    nsal = sal + aumen;

    printf ("O novo salario %f eh", nsal);
    getchar ();
    return 0;
}
