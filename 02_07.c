#include <stdio.h>
#include <string.h>

int contem(const char * texto, const char * trecho)
{
    if (* trecho == '\0')
    {
        return 1;
    }
    for (const char * p = texto; * p; p++)
    {
        const char * a = p, * b = trecho;
        while (* a && * b && * a == * b)
        {
            a++;
            b++;
        }
        if (* b == '\0')
        {
            return 1;
        }
    }
    return 0;
}
int main(void)
{
    char texto[256], trecho[256];
    printf("Texto: ");
    if (! fgets(texto, sizeof texto, stdin))
    {
        return 1;
    }
    printf("Trecho: ");
    if (! fgets(trecho, sizeof trecho, stdin))
    {
        return 1;
    }
    * (texto + strcspn(texto, "\n")) = '\0';
    * (trecho + strcspn(trecho, "\n")) = '\0';
    printf("%s\n", contem(texto, trecho) ? "Ocorre" : "Nao ocorre");
    return 0;
}
