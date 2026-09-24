#include <stdio.h>

float calculadora(float a,float b,char op){
    if(op=='+')
        return a+b;
    else if(op=='-')
        return a-b;
    else if(op=='*')
        return a*b;
    else if(op=='/')
        return a/b;

    return 0;
}

int main(){
    float a,b;
    char op;

    printf("Digite o primeiro valor: ");
    scanf("%f",&a);

    printf("Digite o segundo valor: ");
    scanf("%f",&b);

    printf("Digite a operacao: ");
    scanf(" %c",&op);

    printf("Resultado: %.2f",calculadora(a,b,op));

    return 0;
}