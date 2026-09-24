#include <stdio.h>

void swap(int * a, int * b)
{
    int temp = * a;
    * a = * b;
    * b = temp;
}
void ordenar(int * vetor, int tamanho)
{
    if (tamanho <= 1)
    {
        return;
    }
    for (int * fim = vetor + tamanho - 1; fim > vetor; fim--)
    {
        for (int * p = vetor; p < fim; p++)
        {
            if (* p > * (p + 1))
            {
                swap(p, p + 1);
            }
        }
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
    ordenar(v, n);
    for (int * p = v; p < v + n; p++)
    {
        printf("%d ", * p);
    }
    printf("\n");
    return 0;
}
