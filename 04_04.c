#include <stdio.h>

struct Hora
{
    int hora, minuto, segundo;
};
int segundos(struct Hora h)
{
    return h.hora * 3600 + h.minuto * 60 + h.segundo;
}
int main(void)
{
    struct Hora horas[5];
    int maior = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Horario %d (hora minuto segundo): ", i + 1);
        if (scanf("%d %d %d", & horas[i].hora, & horas[i].minuto, & horas[i].segundo) != 3)
        {
            return 1;
        }
        if (horas[i].hora < 0 || horas[i].hora > 23 || horas[i].minuto < 0 || horas[i].minuto > 59 || horas[i].segundo < 0 || horas[i].segundo > 59)
        {
            return 1;
        }
        if (segundos(horas[i]) > segundos(horas[maior]))
        {
            maior = i;
        }
    }
    printf("Maior hora: %02d:%02d:%02d\n", horas[maior].hora, horas[maior].minuto, horas[maior].segundo);
    return 0;
}
