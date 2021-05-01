#include <stdio.h>

int main()
{
    float sal_base, temp_serv, imp_sob_sal_base, grati, sal_liq;
    char categoria;

    printf("Digite o salario base: R$ ");
    scanf("%f%*c", & sal_base);
    printf("Digite o tempo de servico: ");
    scanf("%f%*c", & temp_serv);

    if (sal_base < 200)
    {
        imp_sob_sal_base = 0;
    }
    else if (sal_base <= 450)
        {
            imp_sob_sal_base = sal_base * 0.03;
        }
    else if (sal_base <700)
        {
            imp_sob_sal_base = sal_base * 0.08;
        }
    else if (sal_base >=700)
        {
            imp_sob_sal_base = sal_base * 0.12;
        }

    if (sal_base > 500)
    {
        if (temp_serv <= 3)
        {
            grati = 20;
        }
        else
        {
            grati = 30;
        }
    }
    else
    {
        if (temp_serv < 3)
        {
            grati = 23;
        }
        else if (temp_serv < 6)
        {
            grati = 35;
        }
        else
        {
            grati = 33;
        }
    }

    sal_liq = sal_base - imp_sob_sal_base + grati;

    if (sal_liq <=350)
    {
        categoria = 'A';
    }
    else if (sal_liq < 600)
    {
        categoria = 'B';
    }
    else
    {
        categoria = 'C';
    }


    printf("O imposto eh de R$ %.2f.\n", imp_sob_sal_base);
    printf("A gratificacao eh de R$ %.2f.\n", grati);
    printf("O salario liquido eh de R$ %.2f.\n", sal_liq);
    printf("A categoria eh %c.\n", categoria);

    getchar();
}
