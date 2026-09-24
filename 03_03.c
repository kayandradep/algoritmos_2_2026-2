#include <stdio.h>

int main(void)
{
    int matriz[3][3] =
    {
        {
            1, 2, 3
        },
        {
            4, 5, 6
        },
        {
            7, 8, 9
        }
    };
    int * ptr = & matriz[0][0];
    int soma = 0;
    for (int i = 0; i < 9; i++)
    {
        if (i % 4 == 0)
        {
            soma += * ptr;
        }
        if (i < 8)
        {
            ptr = (int *) ((unsigned char *) & matriz + (i + 1) * sizeof(int));
        }
    }
    printf("Soma da diagonal: %d\n", soma);
    return 0;
}
