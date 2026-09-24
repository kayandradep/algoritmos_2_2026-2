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
struct Pessoa
{
    char nome[100];
    struct Data nascimento;
};
int chave(struct Data d)
{
    return d.ano * 10000 + d.mes * 100 + d.dia;
}
int main(void)
{
    struct Pessoa pessoas[6];
    int nova = 0, velha = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("Pessoa %d - nome: ", i + 1);
        if (scanf(" %99[^\n]", pessoas[i].nome) != 1)
        {
            return 1;
        }
        printf("Nascimento (dia mes ano): ");
        if (scanf("%d %d %d", & pessoas[i].nascimento.dia, & pessoas[i].nascimento.mes, & pessoas[i].nascimento.ano) != 3 || ! valida(pessoas[i].nascimento))
        {
            return 1;
        }
        if (chave(pessoas[i].nascimento) > chave(pessoas[nova].nascimento))
        {
            nova = i;
        }
        if (chave(pessoas[i].nascimento) < chave(pessoas[velha].nascimento))
        {
            velha = i;
        }
    }
    printf("Mais nova: %s\nMais velha: %s\n", pessoas[nova].nome, pessoas[velha].nome);
    return 0;
}
