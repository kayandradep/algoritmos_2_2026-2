#include <stdio.h>
#define TAM 5

void imprimir(const int * vetor)
{
    for (const int * p = vetor; p < vetor + TAM; p++)
    {
        printf("%d ", * p);
    }
    printf("\n");
}
int main(void)
{
    int v[TAM];
    printf("5 inteiros: ");
    for (int * p = v; p < v + TAM; p++)
    {
        if (scanf("%d", p) != 1)
        {
            return 1;
        }
    }
    imprimir(v);
    return 0;
}
