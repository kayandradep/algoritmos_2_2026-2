#include <stdio.h>

int main(void)
{
    float v[10];
    for (int i = 0; i < 10; i++)
    {
        printf("pos %d: %p\n", i, (void *) (v + i));
    }
    return 0;
}
