#include <stdio.h>

int main()
{
    float sal_min, val_hor, sal_mes, val_dep, val_x, sal_bru, irrf, sal_liq, grat, sal_rec;
    int num_dep, num_hor, quant_hor, i;

    printf("Digite o valor do salario minimo: R$");
    scanf("%f%*c", & sal_min);
    printf("Digite o numero de horas trabalhadas");
    scanf("%d%*c", & num_hor);
    printf("Digite o numero de dependentes");
    scanf("%d%*c", & num_dep);
    printf("Digite a quantidade de horas extras trabalhadas");
    scanf("%d%*c", & quant_hor);

    val_hor = 0.2 * sal_min;
    sal_mes = num_hor * val_hor;
    printf("%f\n", sal_mes);

    val_dep += (num_dep * 32);
    printf("%f \n", val_dep);

    val_x += (quant_hor * (val_hor * 0.5));
    printf("%f \n", val_x);

    sal_bru = sal_mes + val_dep + val_x;

        if (sal_bru < 200)
        {
            irrf = 0;
            sal_liq = sal_bru;
        }
        else if (sal_bru < 500)
        {
            irrf = 0.10 * sal_bru;
            sal_liq = sal_bru - irrf;
        }
        else
        {
            irrf = 0.20 * sal_bru;
            sal_liq = sal_bru - irrf;
        }

        if (sal_liq <350)
        {
            sal_rec = sal_liq + 100;
        }
        else
        {
            sal_rec = sal_liq + 50;
        }

    printf("O salario a receber sera de %.2f reais.", sal_rec);
    getchar();
}
