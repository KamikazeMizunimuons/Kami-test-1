#include <stdio.h>

int main(){
    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferença = a - b;
    int produto = a * b;
    int quociente = a / b;
    // Note que a divisão de inteiros resulta em um número inteiro.

    printf("\nSoma: %d\n", soma);
    printf("Dif: %d\n", diferença);
    printf("Produto: %d\n", produto);
    printf("Quociente: %d\n", quociente);
    
printf("\n Agora com Float\n\n");

    float x = 5.5;
    float y = 2.2;
    float soma1 = x + y;
    float diferença1 = x - y;
    float produto1 = x * y;
    float quociente1 = x / y;
    // Divisão de ponto flutuante.

    printf("\nSoma: %.2f\n", soma1);
    printf("Dif: %.2f\n", diferença1);
    printf("Produto: %.2f\n", produto1);
    printf("Quociente: %.2f\n", quociente1);


return 0;



}
