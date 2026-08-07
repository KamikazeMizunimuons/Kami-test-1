#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades;

    char Estado [20];
    char Código [6];
    char Nome_da_cidade [10];
    unsigned int População; 
    int Pontos_Turísticos;
    float PIB;
    unsigned int Área;

    unsigned int SuperPoderC;

    double PibP;
    double Densidade;

    char Estado1 [20];
    char Código1 [6];
    char Nome_da_cidade1 [10];
    unsigned int População1; 
    int Pontos_Turísticos1;
    float PIB1;
    unsigned int Área1;

    unsigned int SuperPoderC1;

    double PibP1;
    double Densidade1;

  // Área para entrada de dados;

    printf("\nBem-Vindo ao Cadastro de Cartas!\n\nQual o Estado?: \n");
    scanf("%s", Estado);

    printf("Qual é o Código? \n");
    scanf("%s", Código);

    printf("Qual o Nome da cidade?: \n");
    scanf("%s", Nome_da_cidade);

    printf("Qual o número de habitantes?: \n");
    scanf("%u", &População);

    printf("Qual o tamanho da sua área?: \n");
    scanf("%u", &Área);

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
    scanf("%u", &População1);

    printf("Qual o tamanho da sua área?: \n");
    scanf("%u", &Área1);

    printf("Qual a Quantidade de pontos turísticos?: \n");
    scanf("%d", &Pontos_Turísticos1);

    printf("Qual o PIB?: \n");
    scanf("%f", &PIB1);

    PibP = PIB / População;
    Densidade = População / Área;

    PibP1 = (float) PIB1 / População1;
    Densidade1 = (float) População1 / Área1;

    SuperPoderC = (int) População + Área + Pontos_Turísticos + PIB + PibP + (1 / Densidade);
    SuperPoderC = (int) População1 + Área1 + Pontos_Turísticos1 + PIB1 + PibP1 + (1 / Densidade1);
  // Área para exibição dos dados da cidade;
  
    printf("\n*Informações do Cartão*\n| Estado - %s\n| Cidade - %s\n| Código - %s\n| População - %u habitantes\n| Àrea - %u m²\n| Pontos Turísticos - %d pontos\n| PiB - R$ %.2f\n| Densidade Populacional - %f\n| PiB Percapita - R$%.2f\n", Estado, Nome_da_cidade, Código, População, Área, Pontos_Turísticos, PIB, Densidade, PibP);

    printf("\n*Informações do Cartão*\n| Estado - %s\n| Cidade - %s\n| Código - %s\n| População - %u habitantes\n| Àrea - %u m²\n| Pontos Turísticos - %d pontos\n| PiB - R$ %.2f\n| Densidade Populacional - %f\n| PiB Percapita - R$%.2f\n", Estado1, Nome_da_cidade1, Código1, População1, Área1, Pontos_Turísticos1, PIB1, Densidade1, PibP1);

    printf("_\nO poder da 1° Carta è :%u\n", SuperPoderC);
    printf("O poder da 2° Carta è :%u\n", SuperPoderC1);
    printf("A 1° carta vence a 2° carta? | %d\n|0 = Não\n|1 = Sim\n", SuperPoderC > SuperPoderC1);

    printf("__\n**Obrigado por Jogar meu SuperTrunfo!**");
// Espero que o poder da carta n passe o limite dos bytes KKKKKKKKKKKKKKK;
    return 0;