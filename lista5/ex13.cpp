#include<stdio.h>
int main ()
{
    int opcao;

    printf ("Digite uma opcao:\n");
    printf ("1. Imposto\n" );
    printf ("2. Novo Salario\n" );
    printf ("3. Classificacao\n" );
    printf ("Opcao:\t" );
    scanf ("%d%*c",& opcao);

    switch (opcao)
    {
    case 1:
        float sal, imp;
        printf("Digite o salario: R$: ");
        scanf ("%f%*c", & sal);

        if (sal < 500){
            imp = sal * 0.5;
        }
        else
        if(sal <= 850){
            imp = sal * 0.10;
        }
        else{
            imp = sal * 0.15;
        }
        printf("O imposto de seu salario eh R$ %.2f.", imp);
        break;


    case 2:
        float n_sal;
        printf("Digite o salario: R$: ");
        scanf ("%f%*c",& sal);



        if (sal < 450){
            n_sal = sal + 100;
        }
        else

        if (sal < 750){
            n_sal = sal + 75;
        }
        else

         if (sal <= 1500){
            n_sal = sal + 50;
        }
        else{
            n_sal = sal + 25;
        }


        printf ("O novo salario eh de: R$: %f", n_sal);
        break;


    case 3:
        printf ("Digite o salario: R$: ");
        scanf ("%f%*c",& sal);

        if (sal <= 700){
            printf ("Mal Remunerado");
        }
        else {
            printf (" Bem Remunerado");
        }

    }

    return 0;

}
