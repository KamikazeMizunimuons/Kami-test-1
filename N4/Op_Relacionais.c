#include <stdio.h>
   /* 
   a > b (maior que)
   a < b (menor que)
   a = b (maior ou igual a)
   a <= b (menor ou igual a)
   a == b (Igual a)
   a != b (diferente d)
   */
int main(){
    
    int a = 10;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

printf("_ _ _\n");   

    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    printf("x >= c: %d\n", x >= c);
    printf("O valor ASCII de '%c' é %d: \n", c, c);

printf("_ _ _\n");

    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", numero1 > numero2);
    printf("numero1 == numero2: %d\n", numero1 == numero2);

    printf("numero1 > numero2: %d\n", (int)numero1 > numero2);
    printf("numero1 == numero2: %d\n", (int)numero1 == numero2);
    
    return 0;
    // em conversão EXPLICITA não sera comparado os números de float;
    // letras tem valor numerico na tabela ASCII;
    // 0 = N  1 = S;
}