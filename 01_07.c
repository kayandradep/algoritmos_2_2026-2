#include <stdio.h>

float media(void)
{
    float n, soma = 0;
    int quantidade = 0;
    printf("Digite valores positivos (zero ou negativo encerra):\n");
    while (scanf("%f", & n) == 1 && n > 0)
    {
        soma += n;
        quantidade++;
    }
    if (quantidade == 0)
    {
        printf("Nenhum valor positivo informado.\n");
        return 0;
    }
    return soma / quantidade;
}
int main(void)
{
    float resultado = media();
    printf("Media: %.4f\n", resultado);
    return 0;
}
