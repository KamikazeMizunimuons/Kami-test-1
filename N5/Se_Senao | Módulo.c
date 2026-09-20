#include <stdio.h>

int main(){
    /*
    if(condição){ abre a chave 
       \\bloco de comando
       comando 1
       comando 2
    }
    */

    float Batata_do_Hélio;
    float Batata_do_Arthur;

    printf("Qual o valor da Batata do:\n");
      printf("Arthur - ");
       scanf("%f", &Batata_do_Arthur);
    printf("Hélio - ");
       scanf("%f", &Batata_do_Hélio);

    if (Batata_do_Arthur > Batata_do_Hélio){
        printf("Hélio venceu a cotaçao!\n");
        printf("Já sabe o que deve comprar!\n");
}
   int Batata = Batata_do_Hélio, troco;
   troco = Batata % 2;

     if (troco == 0){
       printf("Se for pagar com nota de R$2.00, nem precisa de troco!");

   }

   return 0;

}