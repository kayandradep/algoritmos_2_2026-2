#include <stdio.h>

void tabuada(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d x %d = %d\n", i, n, i * n);
    }
}
int main(void)
{
    int n;
    printf("n (1 a 46340): ");
    if (scanf("%d", & n) != 1 || n <= 0 || n > 46340)
    {
        return 1;
    }
    tabuada(n);
    return 0;
}
