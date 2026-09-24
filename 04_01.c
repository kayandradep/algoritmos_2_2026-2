#include <stdio.h>

struct Pessoa
{
    char nome[100];
    int idade;
    char endereco[200];
};
int main(void)
{
    struct Pessoa p;
    printf("Nome: ");
    if (scanf(" %99[^\n]", p.nome) != 1)
    {
        return 1;
    }
    printf("Idade: ");
    if (scanf("%d", & p.idade) != 1 || p.idade < 0)
    {
        return 1;
    }
    printf("Endereco: ");
    if (scanf(" %199[^\n]", p.endereco) != 1)
    {
        return 1;
    }
    printf("Nome: %s\nIdade: %d\nEndereco: %s\n", p.nome, p.idade, p.endereco);
    return 0;
}
