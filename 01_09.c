#include <stdio.h>

float serie(int n)
{
    float soma = 1, termo = 1;
    for (int i = 1; i <= n; i++)
    {
        termo /= i;
        soma += termo;
        if (termo == 0)
        {
            break;
        }
    }
    return soma;
}
int main(void)
{
    int n;
    printf("N positivo: ");
    if (scanf("%d", & n) != 1 || n <= 0)
    {
        return 1;
    }
    printf("S = %.6f\n", serie(n));
    return 0;
}
