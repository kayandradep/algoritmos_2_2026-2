#include <stdio.h>

void calcular_esfera(float raio, float * area, float * volume)
{
    const float pi = 3.14;
    * area = 4 * pi * raio * raio;
    * volume = (4.0f / 3) * pi * raio * raio * raio;
}
int main(void)
{
    float raio, area, volume;
    printf("raio: ");
    if (scanf("%f", & raio) != 1 || raio < 0)
    {
        return 1;
    }
    calcular_esfera(raio, & area, & volume);
    printf("area: %.4f\nvolume: %.4f\n", area, volume);
    return 0;
}
