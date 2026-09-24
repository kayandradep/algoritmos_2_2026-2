#include <stdio.h>

int idade_dias(int anos, int meses, int dias)
{
    return anos * 365 + meses * 30 + dias;
}
int main(void)
{
    int a, m, d;
    printf("anos, meses e dias: ");
    if (scanf("%d %d %d", & a, & m, & d) != 3 || a < 0 || m < 0 || d < 0)
    {
        return 1;
    }
    printf("idade em dias: %d\n", idade_dias(a, m, d));
    return 0;
}
