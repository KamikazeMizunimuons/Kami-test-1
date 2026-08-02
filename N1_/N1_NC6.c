#include <stdio.h>

int main(){
    int idade = 23;
    float altura = 1.84;
    char opcao = 'M';
    char nome [20] = "Maycon";
    
    printf("Fala sua idade ai (sem mentir): ");
    scanf("%d", &idade);
    printf("Então sua idade é: %d, muito novo pra dar o rabo\n", idade);

    printf("Mas qual a sua altura?  ");
    scanf("%f", &altura);
    printf("%.2f é meio alto pra sua idade, pena que é gay kkkkkkkkkkkk\n", altura);

    printf("Mas beleza, agora me fala seu nome: ");
    scanf("%s", nome); // na linguagem C não precisa do '&' scanf de char%s
    printf("%s? mds, até o nome é meio suspeito ;-;\n", nome);

// sintaxe scanf
// scanf ("formato1" "formato2", &variavel1, &variavel2, ...)
// String - Na Linguagem C o "Backspace" é cosiderado também uma finalização.

}