#include <stdio.h>

void tempo(int segundos)
{
    printf("%d horas, %d minutos e %d segundos\n", segundos / 3600, segundos % 3600 / 60, segundos % 60);
}
int main(void)
{
    int s;
    printf("Duracao em segundos: ");
    if (scanf("%d", & s) != 1 || s < 0)
    {
        return 1;
    }
    tempo(s);
    return 0;
}
