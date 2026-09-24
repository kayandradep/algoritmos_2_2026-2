#include <stdio.h>

struct atleta
{
    char nome[100], esporte[100];
    int idade;
    float altura;
};
int ler_atleta(struct atleta * a)
{
    printf("nome: ");
    if (scanf(" %99[^\n]", a->nome) != 1)
    {
        return 0;
    }
    printf("esporte: ");
    if (scanf(" %99[^\n]", a->esporte) != 1)
    {
        return 0;
    }
    printf("idade e altura (m): ");
    return scanf("%d %f", & a->idade, & a->altura) == 2 && a->idade >= 0 && a->altura > 0;
}
int main(void)
{
    struct atleta atletas[5];
    int alto = 0, velho = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("atleta %d\n", i + 1);
        if (! ler_atleta(& atletas[i]))
        {
            return 1;
        }
        if (atletas[i].altura > atletas[alto].altura)
        {
            alto = i;
        }
        if (atletas[i].idade > atletas[velho].idade)
        {
            velho = i;
        }
    }
    printf("mais alto: %s\nmais velho: %s\n", atletas[alto].nome, atletas[velho].nome);
    return 0;
}
