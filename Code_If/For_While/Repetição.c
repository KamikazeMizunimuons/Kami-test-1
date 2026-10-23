#include <stdio.h>

int main(){
    /*
    int i;

    // for(inicialização; condição; atualização)
    for(i = 0;i < 100; i++){
       printf("%d\n", i);
       */

    /* 
    float i = 0.23;
    // Enquanto a variável i for < 20.25 o código será executado
    while(i < 20.25) {
        printf("%f\n", i);
        i++;
    } 
        */
     
    // do {
    // Código a ser repetido
    // } while(condição);

    /*
    do {
        printf("%d\n", i);
        i = i+2;
    } while( i <= 10);
    */

    int soma = 0;
    int cont = 1;

    for( cont = 1; cont <= 10; cont = cont + 1) {
          soma = soma + cont;
    } 
    printf("A soma é %d\n", soma);


    while (cont <= 10) {
        soma = soma + cont;
        cont++;
    }

    printf("A soma e %d\n", soma);

    return 0;

}