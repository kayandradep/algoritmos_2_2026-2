#include <stdio.h>

int * buscar(int * vetor, int tamanho, int x)
{
    for (int * p = vetor; p < vetor + tamanho; p++)
    {
        if (* p == x)
        {
            return p;
        }
    }
    return NULL;
}
int main(void)
{
    int v[100], n, x;
    printf("Tamanho (1 a 100): ");
    if (scanf("%d", & n) != 1 || n < 1 || n > 100)
    {
        return 1;
    }
    printf("Elementos: ");
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", v + i) != 1)
        {
            return 1;
        }
    }
    printf("X: ");
    if (scanf("%d", & x) != 1)
    {
        return 1;
    }
    int * p = buscar(v, n, x);
    if (p)
    {
        printf("Indice: %d; endereco: %p\n", (int) (p - v), (void *) p);
    }
    else
    {
        printf("Nao encontrado.\n");
    }
    return 0;
}
