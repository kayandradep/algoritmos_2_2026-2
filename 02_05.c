#include <stdio.h>

int main(void)
{
    int v[5];
    printf("digite 5 numeros: ");
    for (int * p = v; p < v + 5; p++)
    {
        if (scanf("%d", p) != 1)
        {
            return 1;
        }
    }
    for (int * p = v; p < v + 5; p++)
    {
        printf("%d ", 2 * * p);
    }
    printf("\n");
    return 0;
}
