#include <stdio.h>

void triangulo(float x, float y, float z)
{
    if (x <= 0 || y <= 0 || z <= 0 || x >= y + z || y >= x + z || z >= x + y)
    {
        printf("Nao forma triangulo.\n");
    }
    else if (x == y && y == z)
    {
        printf("Equilatero\n");
    }
    else if (x == y || x == z || y == z)
    {
        printf("Isosceles\n");
    }
    else
    {
        printf("Escaleno\n");
    }
}
int main(void)
{
    float x, y, z;
    printf("Tres lados: ");
    if (scanf("%f %f %f", & x, & y, & z) != 3)
    {
        return 1;
    }
    triangulo(x, y, z);
    return 0;
}
