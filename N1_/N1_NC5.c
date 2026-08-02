#include <stdio.h>

int main(){
    int idade = 23;
    float altura = 1.84;
    char opcao = 'M';
    char nome [20] = "Maycon";

    printf("A idade do %s é: %d\n", nome, idade);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é : %c\n", opcao);

    printf("Então a altura do %s é %.2f, que combina com sua idade, %d\n", nome, altura, idade);

    /*
    prinf("%formato1 %formato2 %formato3, variavel1, variavel2, variavel3")
    
    \n: Pular linha
    %d: Imprime um inteiro no formato decimal
    %i: Equivalente a %d
    %f: Imprime um número de ponto flutuante no formato padrão
        (.x antes da letra pra delimitar as casas exibidas)
    %e: Imprime um número de ponto flutuante na notação científica
    %c: Imprime um único caractere
    %s: Imprime uma cadeia (string) de caracteres
    */

}