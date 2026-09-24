#include <stdio.h>

struct Aluno
{
    char matricula[30], nome[100];
    float notas[3];
};
float media(struct Aluno a)
{
    return(a.notas[0] + a.notas[1] + a.notas[2]) / 3;
}
int main(void)
{
    struct Aluno alunos[5];
    int melhor = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("aluno %d - mat: ", i + 1);
        if (scanf(" %29s", alunos[i].matricula) != 1)
        {
            return 1;
        }
        printf("nome: ");
        if (scanf(" %99[^\n]", alunos[i].nome) != 1)
        {
            return 1;
        }
        printf("3 notas: ");
        for (int j = 0; j < 3; j++)
        {
            if (scanf("%f", & alunos[i].notas[j]) != 1)
            {
                return 1;
            }
        }
        if (media(alunos[i]) > media(alunos[melhor]))
        {
            melhor = i;
        }
    }
    printf("aluno: %s\nnotas: %.2f %.2f %.2f\nmedia: %.2f\n", alunos[melhor].nome, alunos[melhor].notas[0], alunos[melhor].notas[1], alunos[melhor].notas[2], media(alunos[melhor]));
    return 0;
}
