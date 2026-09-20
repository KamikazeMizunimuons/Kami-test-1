#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque;
    unsigned int EstoqueMin = 1500;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com estoque: \n");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("\n - A temperatura está alta\n");
    } else {
        printf("\n - A temperatura está dentro dos parâmetros\n");   
    }
    
    if(umidade > 50){
        printf(" - Umidade está elevada\n");
    } else {
        printf(" - A umidade está dentro dos parâmetros\n");
    }

    if(estoque > EstoqueMin){
        printf(" - Não há necessidade de abastecimento\n");
    } else {
        printf(" - Estoque abaixo do ideal, necessário abastecer\n");
    }

    return 0;
}