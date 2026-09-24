#include <stdio.h>

struct atleta
{
    char nome[100], esporte[100];
    int idade;
    float altura;
};
int ler_atleta(struct atleta * a)
{
    printf("Nome: ");
    if (scanf(" %99[^\n]", a->nome) != 1)
    {
        return 0;
    }
    printf("Esporte: ");
    if (scanf(" %99[^\n]", a->esporte) != 1)
    {
        return 0;
    }
    printf("Idade e altura em metros: ");
    return scanf("%d %f", & a->idade, & a->altura) == 2 && a->idade >= 0 && a->altura > 0;
}
int main(void)
{
    struct atleta atletas[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Atleta %d\n", i + 1);
        if (! ler_atleta(& atletas[i]))
        {
            return 1;
        }
    }
    for (int fim = 4; fim > 0; fim--)
    {
        for (int j = 0; j < fim; j++)
        {
            if (atletas[j].idade < atletas[j + 1].idade)
            {
                struct atleta temp = atletas[j];
                atletas[j] = atletas[j + 1];
                atletas[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s | %s | %d anos | %.2f m\n", atletas[i].nome, atletas[i].esporte, atletas[i].idade, atletas[i].altura);
    }
    return 0;
}
