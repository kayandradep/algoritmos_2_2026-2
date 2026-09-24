#include <stdio.h>
#include <math.h>

void baskara(float a, float b, float c)
{
    float delta = b * b - 4 * a * c;
    if (a == 0)
    {
        printf("Nao e uma equacao do segundo grau.\n");
    }
    else if (delta < 0)
    {
        printf("Nao existem raizes reais.\n");
    }
    else
    {
        printf("x1 = %.4f\nx2 = %.4f\n", (- b + sqrt(delta)) / (2 * a), (- b - sqrt(delta)) / (2 * a));
    }
}
int main(void)
{
    float a, b, c;
    printf("a, b e c: ");
    if (scanf("%f %f %f", & a, & b, & c) != 3)
    {
        return 1;
    }
    baskara(a, b, c);
    return 0;
}
