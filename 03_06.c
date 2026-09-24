#include <stdio.h>

int * busca_subvetor(int * vetor, int tam_v, int * sub, int tam_s)
{
    if (tam_s <= 0 || tam_s > tam_v)
    {
        return NULL;
    }
    for (int * p = vetor; p <= vetor + tam_v - tam_s; p++)
    {
        int * a = p, * b = sub;
        while (b < sub + tam_s && * a == * b)
        {
            a++;
            b++;
        }
        if (b == sub + tam_s)
        {
            return p;
        }
    }
    return NULL;
}
int main(void)
{
    int v[100], sub[100], n, m;
    printf("tamanho do vetor (1 a 100): ");
    if (scanf("%d", & n) != 1 || n < 1 || n > 100)
    {
        return 1;
    }
    printf("elementos: ");
    for (int * p = v; p < v + n; p++)
    {
        if (scanf("%d", p) != 1)
        {
            return 1;
        }
    }
    printf("tam do subvetor (1 a 100): ");
    if (scanf("%d", & m) != 1 || m < 1 || m > 100)
    {
        return 1;
    }
    printf("elementos do subvetor: ");
    for (int * p = sub; p < sub + m; p++)
    {
        if (scanf("%d", p) != 1)
        {
            return 1;
        }
    }
    int * achou = busca_subvetor(v, n, sub, m);
    if (achou)
    {
        printf("inicio no indice %d\n", (int) (achou - v));
    }
    else
    {
        printf("nao encontrou\n");
    }
    return 0;
}
