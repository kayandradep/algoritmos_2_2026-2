#include <stdio.h>
#include <math.h>

struct Ponto
{
    float x, y;
};
struct Retangulo
{
    struct Ponto superior_esquerdo, inferior_direito;
};
int main(void)
{
    struct Retangulo r;
    printf("X e Y do ponto superior esquerdo: ");
    if (scanf("%f %f", & r.superior_esquerdo.x, & r.superior_esquerdo.y) != 2)
    {
        return 1;
    }
    printf("X e Y do ponto inferior direito: ");
    if (scanf("%f %f", & r.inferior_direito.x, & r.inferior_direito.y) != 2)
    {
        return 1;
    }
    float largura = fabs(r.inferior_direito.x - r.superior_esquerdo.x);
    float altura = fabs(r.superior_esquerdo.y - r.inferior_direito.y);
    printf("Area: %.4f\nDiagonal: %.4f\nPerimetro: %.4f\n", largura * altura, sqrt(largura * largura + altura * altura), 2 * (largura + altura));
    return 0;
}
