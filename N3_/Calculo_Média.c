#include <stdio.h>

int main(){

    int nota1, nota2, nota3;
    float media;

    printf("\n *Hora de Calcular a Média  das suas notas!!*\n");

    printf("\nQual sua primeira nota?: \n");
    scanf("%d", &nota1);

    printf("\nQual sua segunda nota?: \n");
    scanf("%d", &nota2);

    printf("\nQual sua terceira nota?: \n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("A Média é: %.2f\n", media);
    
    return 0;

}