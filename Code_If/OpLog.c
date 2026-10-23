#include <stdio.h>

int main(){

    int a = 10, b = 5, c = 9;

    if(a > 0 && b > 0){
        printf("Os dois números são positivos\n");
    } else {
        printf("Pelo menos um dos números é negativo\n");
    }

    if(a > 0 || b > 0){
        printf("Pelo menos um dos números é positivo\n");
    } else {
        printf("Ambos os números ao quadrado são positivos\n");
    }

    if(!c){ // (!(c > 0))
        printf("A variável C é zero\n");
    } else {
        printf("A variável C é diferente de 0\n");
    }

    if(!(a + b > c)){
        printf("A variável F é positiva\n");
    } else {
        printf("A variável F é negativa\n");
    }

    if(a > 0 && b < 0 || c == 0) {
        // a > 0;
        // b < 0;
        // V && V => V
        // V && F => F
        // V || c == 0;
        // V || V => F
        // V || F => V
        printf("A condição é verdadeira\n");
    } else {
        printf("A condição é falsa\n");
    }

    return 0;

}