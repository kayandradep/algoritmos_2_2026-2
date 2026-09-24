#include <stdio.h>
#define TAM 5

void preencher(int * vetor, int valor)
{
    for (int * p = vetor; p < vetor + TAM; p++)
    {
        * p = valor;
    }
}
int main(void)
{
    int v[TAM], valor;
    printf("Valor para preencher: ");
    if (scanf("%d", & valor) != 1)
    {
        return 1;
    }
    preencher(v, valor);
    for (int * p = v; p < v + TAM; p++)
    {
        printf("%d ", * p);
    }
    printf("\n");
    return 0;
}
