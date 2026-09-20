#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome [20];

    printf("Qual o seu nome?: \n");
    scanf("%s", nome);

    printf("Quantas semanas tem seu bebê?: \n");
    scanf("%d", &idade);

    printf("Qual sua altura?: \n");
    scanf("%f", &altura);

    printf("%s, sabia que eu te amo? Nosso nenem so tem %d semanas e eu ja amo também, meu amor mede %.2f\n", nome, idade, altura );

return 0;
}