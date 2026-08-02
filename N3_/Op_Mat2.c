#include <stdio.h>

int main(){
    /*
    Atribuição simples (=)
    Atribuição com soma (+=)
    Atribuição com subtração (-=)
    Atribuição com multiplicação (*=)
    Atribuição com divisão (/=)
    */
   int numero1 = 12, numero2 = 5, resultado;

   //resutado = 10 (atribuição)
   resultado = 10;
   printf("resultado: %d\n", resultado);

   // resultado = resultado + 20
   resultado += 20;
   printf("resultado: %d\n", resultado);

   // resultado = resultado - numero1
   resultado -= numero1;
   printf("resultado: %d\n", resultado);

   // resultado = resultado * numero2
   resultado *= numero2;
   printf("resultado: %d\n", resultado);

   // resultado = resultado /2
   resultado /= 2;
   printf("resultado: %d\n", resultado);


}