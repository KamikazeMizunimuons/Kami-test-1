#include <stdio.h>

int main(){

    char Estado [20];
    char Código [6];
    char Nome_da_cidade [10];
    int População; 
    int Pontos_Turísticos;
    float PIB, Área;

    printf("\nBem-Vindo ao Cadastro de Cartas!\n\nQual o Estado?: \n");
    scanf("%s", Estado);

    printf("Qual é o Código? \n");
    scanf("%s", Código);

    printf("Qual o Nome da cidade?: \n");
    scanf("%s", Nome_da_cidade);

    printf("Qual o número de habitantes?: \n");
    scanf("%d", &População);

    printf("Qual o tamanho da sua área?: \n");
    scanf("%f", &Área);

    printf("Qual a Quantidade de pontos turísticos?: \n");
    scanf("%d", &Pontos_Turísticos);

    printf("Qual o PIB?: \n");
    scanf("%f", &PIB);

printf("\n*Informações do Cartão*\n| Estado - %s\n| Cidade - %s\n| Código - %s\n| População - %d habitantes\n| Àrea - %.3fm²\n| Pontos Turísticos - %d pontos\n| PiB - R$ %.2f.\n", Estado, Nome_da_cidade, Código, População, Área, Pontos_Turísticos, PIB);

    char Estado1 [20];
    char Código1 [6];
    char Nome_da_cidade1 [10];
    int População1; 
    int Pontos_Turísticos1;
    float PIB1, Área1;

    printf("\nBem-Vindo ao Cadastro de Cartas!\n\nQual o Estado?: \n");
    scanf("%s", Estado1);

    printf("Qual é o Código? \n");
    scanf("%s", Código1);

    printf("Qual o Nome da cidade?: \n");
    scanf("%s", Nome_da_cidade1);

    printf("Qual o número de habitantes?: \n");
    scanf("%d", &População1);

    printf("Qual o tamanho da sua área?: \n");
    scanf("%f", &Área1);

    printf("Qual a Quantidade de pontos turísticos?: \n");
    scanf("%d", &Pontos_Turísticos1);

    printf("Qual o PIB?: \n");
    scanf("%f", &PIB1);

printf("\n*Informações do Cartão*\n| Estado - %s\n| Cidade - %s\n| Código - %s\n| População - %d habitantes\n| Àrea - %.3fm²\n| Pontos Turísticos - %d pontos\n| PiB - R$ %.2f.\n", Estado1, Nome_da_cidade1, Código1, População1, Área1, Pontos_Turísticos1, PIB1);

return 0;

}