#include <stdio.h>
#include <stdlib.h>

float soma(float n1, float n2);

int main(){

    float num1 = 50, num2 = 50;

    print("SOMA: %.1f + %.1f = %.1f\n",num1,num2,soma(num1,num2));

    return 0;
}

float soma(float n1, float n2){
        return n1 + n2;
}