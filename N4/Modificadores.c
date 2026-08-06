#include <stdio.h>
/*
int -2.147.483.648 a 2.147.487.647;
unsigned int 0 a 4.294.967.295;
char -128 a 127;
unsigned char 0 a 255;
long - maior e mais preciso;

Tamanho de int: 4 bytes
Tamanho de long int: 8 bytes (4 bytes no VisualCode)
Tamanho de long long int: 8 bytes
Tamanho de double: 8 bytes
Tamanho de long double: 16 bytes
Tamanho de short int: 2 bytes
Tamanho de float: 4 bytes
*/

int main() {
    int numeroSinal = 3000000000; // Este valor excede o limite do int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("Número c/ sinal: %d\n", numeroSinal);
    printf("Número s/ sinal: %u\n", numeroSemSinal);


    int regularNumber = 2147483647; // Valor máximo de int
    long int bigNumber = 2147483647;
 
    printf("Número regular (int): %d\n", regularNumber);
    printf("Número grande (long int): %ld\n", bigNumber);
 
    bigNumber = 2147483648; // Valor maior que o máximo de int
    printf("Número grande atualizado (long int): %ld\n", bigNumber);
    
    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;
 
    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);
    
    short int numeroPequeno = 32767; // Valor máximo de short int
    printf("Número pequeno (Short int): %d\n", numeroPequeno);

    numeroPequeno = 32768; // Valor maior que o máximo de short int
    printf("Número pequeno atualizado (Short int): %d\n", numeroPequeno);

/*
Número c/ sinal: -1294967296
Número s/ sinal: 3000000000
Número regular (int): 2147483647
Número grande (long int): 2147483647
Número grande atualizado (long int): 2147483648
Número preciso (double): 3.141592653589793
Número muito preciso (long double): 3.141592653589793-115998
                                       O final ficou dirente no GitHub
*/
    return 0;

}