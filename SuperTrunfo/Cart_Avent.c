#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades;

    char Estado [20];
    char Código [6];
    char Nome_da_cidade [10];
    int População; 
    int Pontos_Turísticos;
    float PIB, Área;

    float PibP;
    float Densidade;

    char Estado1 [20];
    char Código1 [6];
    char Nome_da_cidade1 [10];
    int População1; 
    int Pontos_Turísticos1;
    float PIB1, Área1;

    float PibP1;
    float Densidade1;

  // Área para entrada de dados;

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

    // Próxima carta.

    printf("\nPróxima Carta!\n\nQual o Estado?: \n");
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

    PibP = PIB / População;
    Densidade = População / Área;

    PibP1 = (float) PIB1 / População1;
    Densidade1 = (float) População1 / Área1;


  // Área para exibição dos dados da cidade;
  
    printf("\n*Informações do Cartão*\n| Estado - %s\n| Cidade - %s\n| Código - %s\n| População - %d habitantes\n| Àrea - %f m²\n| Pontos Turísticos - %d pontos\n| PiB - R$ %f\n| Densidade Populacional - %f\n| PiB Percapita - R$%f\n", Estado, Nome_da_cidade, Código, População, Área, Pontos_Turísticos, PIB, Densidade, PibP);

    printf("\n*Informações do Cartão*\n| Estado - %s\n| Cidade - %s\n| Código - %s\n| População - %d habitantes\n| Àrea - %f m²\n| Pontos Turísticos - %d pontos\n| PiB - R$ %f\n| Densidade Populacional - %f\n| PiB Percapita - R$%f\n", Estado1, Nome_da_cidade1, Código1, População1, Área1, Pontos_Turísticos1, PIB1, Densidade1, PibP1);

    return 0;

} 