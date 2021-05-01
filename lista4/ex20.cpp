#include <stdio.h>

int main()
{
    int cod_pro, cod_pais;
    float peso, val_imp, prec, pre_imp, pesog;

    printf("Digite o codigo do produto: ");
    scanf("%d%*c", & cod_pro);
    printf("Digite o peso, em quilos: ");
    scanf("%f%*c", & peso);
    printf("Digite o codigo do pais: ");
    scanf("%d%*c", & cod_pais);

    pesog = peso * 1000;

        if (cod_pro <=4)
        {
            prec = pesog * 0.10;
        }
        else if (cod_pro <=7)
        {
            prec = pesog * 0.25;
        }
        else if (cod_pro <=10)
        {
            prec = pesog * 0.35;
        }

    switch(cod_pais)
    {
    case 1:
        val_imp = 0;
        pre_imp = prec;
        break;
    case 2:
        val_imp = prec * 0.15;
        pre_imp = prec + val_imp;
        break;
    case 3:
        val_imp = prec * 0.25;
        pre_imp = prec + val_imp;
        break;
    default:
        printf("Digite um codigo valido.");
        break;
    }

    printf("O peso do produto eh de %.0f gramas.\n", pesog);
    printf("O Valor total do produto eh de R$ %.2f.\n", prec);
    printf("O Valor do imposto eh de R$ %.2f.\n", val_imp);
    printf("O Valor total eh de R$ %.2f.\n", pre_imp);

    getchar();
}
