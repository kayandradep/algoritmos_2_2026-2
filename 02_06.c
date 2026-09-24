#include <stdio.h>

int main(void)
{
    int v[5];
    printf("cinco inteiros: ");
    for (int * p = v; p < v + 5; p++)
    {
        if (scanf("%d", p) != 1)
        {
            return 1;
        }
    }
    for (int * p = v; p < v + 5; p++)
    {
        if (* p % 2 == 0)
        {
            printf("%p\n", (void *) p);
        }
    }
    return 0;
}
