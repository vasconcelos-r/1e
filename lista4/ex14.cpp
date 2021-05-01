#include <stdio.h>

int main()
{
    float sal_ini, novo_sal, bonif, aux_esc;

    printf("Digite o valor de seu salario: R$");
    scanf("%f%*c", &sal_ini);

    if (sal_ini < 500)
    {
        bonif = 0.05 * sal_ini;
        novo_sal = sal_ini + bonif;

        aux_esc = 150;
        novo_sal += aux_esc;
    }
    else if (sal_ini < 1200)
    {
        if (sal_ini < 600)
        {
            bonif = 0.12 * sal_ini;
            novo_sal = sal_ini + bonif;

            aux_esc = 150;
            novo_sal += aux_esc;
        }
        else
        {
            bonif = 0.12 * sal_ini;
            novo_sal = sal_ini + bonif;

            aux_esc = 100;
            novo_sal += aux_esc;
        }
    }
    else
    {
        aux_esc = 100;
        novo_sal = sal_ini + aux_esc;
    }
    printf("O novo Salario sera de R$ %.2f, acrescido de R$ %.2f de bonificacao e R$ %.2f de auxilio escola.", novo_sal, bonif, aux_esc);
    getchar();
    return 0;
}
