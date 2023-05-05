#include <stdio.h>
#include <stdlib.h>

float soma(float n1, float n2);
float subtracao(float n1, float n2);
float divisao(float n1, float n2);


int main(){

<<<<<<< HEAD
    float num1 = 50, num2 = 50;

    printf("SOMA: %.1f + %.1f = %.1f\n",num1,num2,soma(num1,num2));
     printf("MULTIPLICACAO: %.1f X %.1f = %.1f\n",num1,num2,multiplicacao(num1,num2));
=======
    float num1 = 50, num2 = 2;
>>>>>>> 569ffe5a6c23266f571060ee9fc76e54bd917dd5

    printf("SOMA: %.1f + %.1f = %.1f\n", num1, num2, soma(num1,num2));
    printf("SUBTRACAO: %.1f - %.1f = %.1f\n", num1, num2, subtracao(num1,num2));
    printf("DIVISAO: %.1f / %.1f = %.1f\n", num1, num2, divisao(num1,num2));
    
    return 0;
}

float soma(float n1, float n2){
        return n1 + n2;
}

<<<<<<< HEAD
float multiplicacao(float n1, float n2){
        return n1 * n2;
} 

=======
float subtracao(float n1, float n2){
        return n1 - n2;
}

float divisao(float n1, float n2){
        return n1 / n2;
}
>>>>>>> 569ffe5a6c23266f571060ee9fc76e54bd917dd5
