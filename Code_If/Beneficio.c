#include <stdio.h>
//Verificação de idade e renda para beneficio
int main()
{
    int idade, renda, dependentes;

    printf("Digite sua idade\n");
    scanf("%d", &idade);
    printf("Digite sua renda\n");
    scanf("%d", &renda);
    printf("Digite o número de dependentes\n");
    scanf("%d", &dependentes);
    
    if (idade >= 18 || idade <= 60)
    {
        if (renda < 3000)
        {
            if (dependentes > 2)
            {
                printf("Você atende a todos os critérios!\n");
            } else {
                printf("Você não atende ao critério dependentes\n");
            }
        } else {
            printf("Você não tem direito ao desconto devido a renda\n");
        }  
    } else {
      printf("Não aceito por requisitos de idade\n");
    }

return 0;
}
    