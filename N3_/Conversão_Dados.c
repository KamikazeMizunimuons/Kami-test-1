#include <stdio.h>

int main(){
    
    int a = 10;
    float b = 3.5;
    float resultado = a + b; 
    // 'a' convertido IMPLICITAMENTE para float;

printf("Resultado: %.2f\n", resultado);
    
    int x = 10;
    int y = 3;
    float quociente = (float) x / y; //casting
    // 'a' é convertido EXPLICITAMENTE para float;
    // sem o casting fica '3.00'

printf("Resultado: %.2f\n", quociente);

return 0;

}