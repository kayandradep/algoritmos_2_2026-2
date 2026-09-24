#include <stdio.h>

float media(void)
{
    float n, soma = 0;
    int quantidade = 0;
    printf("valores positivos (0 ou negativo pra parar):\n");
    while (scanf("%f", & n) == 1 && n > 0)
    {
        soma += n;
        quantidade++;
    }
    if (quantidade == 0)
    {
        printf("nenhum valor positivo\n");
        return 0;
    }
    return soma / quantidade;
}
int main(void)
{
    float resultado = media();
    printf("media: %.4f\n", resultado);
    return 0;
}
