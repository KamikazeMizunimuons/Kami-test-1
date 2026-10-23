#include <stdio.h>

int main(){

    unsigned int idade;
    float altura;

    printf("\nBem-Vindo ao processo seletivo da nossa brincadeira!!\n");
    printf("Qual é a sua idade?\n");
    scanf("%u", &idade);
    printf("Qual sua altura?\n");
    scanf("%f", &altura);

    if((altura >= 1.80) && (idade >= 18 && idade < 60)){
    printf("Parabéns você atende aos requisitos para nossa brincadeira\n");
} else {
    printf("Infelizmente você não atente aos requisitos da nossa brincadeira\n");
}
    
    if (idade < 12){
        printf("Você é uma criança\n");
    } else if (idade >= 12 && idade < 18){
        printf("Você é um adolecente\n");
    } else if (idade >= 18 && idade < 60){
        printf("Você é um adulto\n");
    } else {
        printf("Você é um idoso\n");
    }
    
return 0;
}

