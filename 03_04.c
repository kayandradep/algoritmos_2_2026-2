#include <stdio.h>

void inverte_vetor(int * vetor, int tamanho)
{
    if (tamanho <= 1)
    {
        return;
    }
    int * inicio = vetor, * fim = vetor + tamanho - 1;
    while (inicio < fim)
    {
        int temp = * inicio;
        * inicio = * fim;
        * fim = temp;
        inicio++;
        fim--;
    }
}
int main(void)
{
    int v[100], n;
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
    inverte_vetor(v, n);
    for (int * p = v; p < v + n; p++)
    {
        printf("%d ", * p);
    }
    printf("\n");
    return 0;
}
