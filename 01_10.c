#include <stdio.h>

float calcular(float a, float b, char op)
{
    switch (op)
    {
        case '+' :
        return a + b;
        case '-' :
        return a - b;
        case '*' :
        return a * b;
        case '/' :
        return a / b;
        default :
        return 0;
    }
}
int main(void)
{
    float a, b;
    char op;
    printf("Primeiro numero, operacao e segundo numero (ex.: 2 + 3): ");
    if (scanf("%f %c %f", & a, & op, & b) != 3)
    {
        return 1;
    }
    if (op != '+' && op != '-' && op != '*' && op != '/')
    {
        printf("Operacao invalida.\n");
        return 1;
    }
    if (op == '/' && b == 0)
    {
        printf("Divisao por zero nao permitida.\n");
        return 1;
    }
    printf("Resultado: %.4f\n", calcular(a, b, op));
    return 0;
}
