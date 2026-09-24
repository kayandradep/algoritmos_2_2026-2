#include <stdio.h>

void triangulo(float x, float y, float z)
{
    if (x <= 0 || y <= 0 || z <= 0 || x >= y + z || y >= x + z || z >= x + y)
    {
        printf("nao forma triangulo.\n");
    }
    else if (x == y && y == z)
    {
        printf("equilatero\n");
    }
    else if (x == y || x == z || y == z)
    {
        printf("isosceles\n");
    }
    else
    {
        printf("escaleno\n");
    }
}
int main(void)
{
    float x, y, z;
    printf("tres lados: ");
    if (scanf("%f %f %f", & x, & y, & z) != 3)
    {
        return 1;
    }
    triangulo(x, y, z);
    return 0;
}
