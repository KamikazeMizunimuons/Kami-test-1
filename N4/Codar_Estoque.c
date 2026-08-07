#include <stdio.h>

int main(){
    //Declarar varáveis Produto, u i estoque, double valor unitario
    // u i quantidade minima
    char produtoA [30] = "Produto A";
    char produtoB [30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 18.26;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2300;

    double ValorTotalA;
    double ValorTotalB;

    int resultadoA, resultadoB;

    //Exibir informações dos produtos
    printf("\n*Informações de Estoque*\n");
    printf("_\nProduto - %s \n- Em estoque %u \n- Valor unitário R$%.2f\n", produtoA, estoqueA, valorA);
    printf("_\nProduto - %s \n- Em estoque %u \n- Valor unitário R$%.2f\n", produtoB, estoqueB, valorB);

    //Comparações de valor minimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("_\nO estoque minimo de A tem valor %d\n", resultadoA);
    printf("o estoque minimo de B tem valor %d\n", resultadoB);
    printf("_\n1 = Verdadeiro\n0 = Falso\n");

    //Comparação entre os valores
    printf("_\nValor total de A é maior que o valor Total de B? %d\n", (estoqueA * valorA) > (estoqueB * valorB));

    printf("_\n1 = Verdadeiro\n0 = Falso\n");
    return 0;
}  