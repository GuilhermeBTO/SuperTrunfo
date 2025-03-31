#include <stdio.h.>
int main() {
   
    int a = 20, b = 10, c = 4;
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    int divisao = a / c;
    float resto = a%b;
    int a *= 3;
    int d = a++;

    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("multiplicacao: %d\n", multiplicacao);
    printf("divisao: %d\n", divisao);
    printf("resto: %f\n", resto);
    printf("vezes 3: %d\n",a );
    printf("incremento: %d\n", d);
    
    return 0;

}