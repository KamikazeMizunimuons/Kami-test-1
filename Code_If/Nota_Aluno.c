#include <stdio.h>

int main(){
    
    int nota;

    printf("Digite sua nota.\n");
    scanf("%d", &nota);

    if (nota <= 49){
        printf("Nota F");
    } else if (nota <= 59){
        printf("Nota E");
    } else if (nota <= 69){
        printf("Nota D");
    } else if (nota <= 79){
        printf("Nota C");
    } else if (nota <= 89){
        printf("Nota B");
    } else {
        printf("Nota A");
    }
    return 0;
}