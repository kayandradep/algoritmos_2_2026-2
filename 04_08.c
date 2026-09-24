#include <stdio.h>

struct Data
{
    int dia, mes, ano;
};
int bissexto(int ano)
{
    return ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0);
}
int dias_mes(int mes, int ano)
{
    const int dias[] =
    {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };
    return dias[mes - 1] + (mes == 2 && bissexto(ano));
}
int valida(struct Data d)
{
    return d.ano >= 1 && d.ano <= 9999 && d.mes >= 1 && d.mes <= 12 && d.dia >= 1 && d.dia <= dias_mes(d.mes, d.ano);
}
int total_dias(struct Data d)
{
    int anos = d.ano - 1;
    int total = 365 * anos + anos / 4 - anos / 100 + anos / 400;
    for (int mes = 1; mes < d.mes; mes++)
    {
        total += dias_mes(mes, d.ano);
    }
    return total + d.dia - 1;
}
int main(void)
{
    struct Data a, b;
    printf("Primeira data (dia mes ano): ");
    if (scanf("%d %d %d", & a.dia, & a.mes, & a.ano) != 3 || ! valida(a))
    {
        printf("Data invalida.\n");
        return 1;
    }
    printf("Segunda data (dia mes ano): ");
    if (scanf("%d %d %d", & b.dia, & b.mes, & b.ano) != 3 || ! valida(b))
    {
        printf("Data invalida.\n");
        return 1;
    }
    int diferenca = total_dias(b) - total_dias(a);
    if (diferenca < 0)
    {
        diferenca = - diferenca;
    }
    printf("Dias decorridos: %d\n", diferenca);
    return 0;
}
