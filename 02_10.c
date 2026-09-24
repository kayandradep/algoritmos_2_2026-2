#include <stdio.h>

int main(void)
{
    int a, * b, * * c, * * * d;
    b = & a;
    c = & b;
    d = & c;
    printf("Inteiro: ");
    if (scanf("%d", b) != 1)
    {
        return 1;
    }
    printf("Dobro: %d\n", 2 * * b);
    printf("Triplo: %d\n", 3 * * * c);
    printf("Quadruplo: %d\n", 4 * * * * d);
    return 0;
}
