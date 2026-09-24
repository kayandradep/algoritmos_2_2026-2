#include <stdio.h>

void extrair_estatisticas(int * vetor, int tamanho, int * min, int * max, float * media)
{
    if (tamanho <= 0)
    {
        * min = * max = 0;
        * media = 0;
        return;
    }
    float soma = * vetor;
    * min = * max = * vetor;
    for (int * p = vetor + 1; p < vetor + tamanho; p++)
    {
        if (* p < * min)
        {
            * min = * p;
        }
        if (* p > * max)
        {
            * max = * p;
        }
        soma += * p;
    }
    * media = (float) (soma / tamanho);
}
int main(void)
{
    int v[100], n, min, max;
    float media;
    printf("Tamanho (1 a 100): ");
    if (scanf("%d", & n) != 1 || n < 1 || n > 100)
    {
        return 1;
    }
    printf("Elementos: ");
    for (int * p = v; p < v + n; p++)
    {
        if (scanf("%d", p) != 1)
        {
            return 1;
        }
    }
    extrair_estatisticas(v, n, & min, & max, & media);
    printf("Minimo: %d\nMaximo: %d\nMedia: %.4f\n", min, max, media);
    return 0;
}
