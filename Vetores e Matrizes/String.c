#include <stdio.h>

int main(){
    // Sua String em C vai sempre usar a ultima posição o \0
    char exemplo [6] ; /*= "Hello";

    printf("%s\n", exemplo);*/ //Sem '&'

    printf("Qual o carboidrato que se come pela manhã?\n");
    scanf("%s", exemplo);

    exemplo[2]= 'u';

    printf("Então você gosta de %s pela manhã?\n", exemplo);


    return 0;

}