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
        printf("Aluno %d - matricula: ", i + 1);
        if (scanf(" %29s", alunos[i].matricula) != 1)
        {
            return 1;
        }
        printf("Nome: ");
        if (scanf(" %99[^\n]", alunos[i].nome) != 1)
        {
            return 1;
        }
        printf("Tres notas: ");
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
    printf("Aluno: %s\nNotas: %.2f %.2f %.2f\nMedia: %.2f\n", alunos[melhor].nome, alunos[melhor].notas[0], alunos[melhor].notas[1], alunos[melhor].notas[2], media(alunos[melhor]));
    return 0;
}
