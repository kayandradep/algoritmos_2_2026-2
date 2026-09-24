#include <stdio.h>

int somatorio(int n)
{
    int soma = 0;
    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }
    return soma;
}
int main(void)
{
    int n;
    printf("N (1 a 65535): ");
    if (scanf("%d", & n) != 1 || n <= 0 || n > 65535)
    {
        return 1;
    }
    printf("Soma: %d\n", somatorio(n));
    return 0;
}
