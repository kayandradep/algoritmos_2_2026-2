#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int a, b;
    printf("Dois inteiros: ");
    if (scanf("%d %d", & a, & b) != 2)
    {
        return 1;
    }
    int * maior = (uintptr_t) & a > (uintptr_t) & b ? & a : & b;
    printf("Conteudo do maior endereco: %d\n", * maior);
    return 0;
}
