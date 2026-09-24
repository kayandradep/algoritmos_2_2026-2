#include <stdio.h>

float volume(float raio)
{
    return 4.0 / 3.0 * 3.14 * raio * raio * raio;
}
int main(void)
{
    float r;
    printf("Raio: ");
    if (scanf("%f", & r) != 1 || r < 0)
    {
        return 1;
    }
    printf("Volume: %.4f\n", volume(r));
    return 0;
}
