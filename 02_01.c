#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int a = 0, b = 0;
    int * maior = (uintptr_t) & a > (uintptr_t) & b ? & a : & b;
    printf("maior end: %p\n", (void *) maior);
    return 0;
}
