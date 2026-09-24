#include <stdio.h>

int perfeito(int n)
{
    int soma = 0;
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            soma += i;
        }
    }
    return soma == n;
}
int main(void)
{
    int n;
    printf("num: ");
    if (scanf("%d", & n) != 1)
    {
        return 1;
    }
    printf("%d\n", perfeito(n));
    return 0;
}
