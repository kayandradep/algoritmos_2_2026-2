#include <stdio.h>

char conceito(float nota)
{
    if (nota < 5)
    {
        return 'D';
    }
    if (nota < 7)
    {
        return 'C';
    }
    if (nota < 9)
    {
        return 'B';
    }
    return 'A';
}
int main(void)
{
    float nota;
    printf("Media final: ");
    if (scanf("%f", & nota) != 1 || nota < 0 || nota > 10)
    {
        return 1;
    }
    printf("Conceito: %c\n", conceito(nota));
    return 0;
}
