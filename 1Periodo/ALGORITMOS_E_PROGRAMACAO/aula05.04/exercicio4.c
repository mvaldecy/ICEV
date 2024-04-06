/*Implemente uma algoritmo que represente a situação a seguir: Lê três números inteiros
positivos apresentando como siada o maior valor digitado entre eles. O algoritmo deverá
prever os valores iguais, caso isso aconteça apresentar a mensagem: “Todos os valores
digitados são iguais”.
*/
#include <stdio.h>

int getMax(num1, num2, num3) {
    if(num1 == num2 && num1 == num3) {
        return -1;
    }
    if(num1 > num2 && num1 > num3) {
        return num1;
    }
    if(num2 > num1 && num2 > num3) {
        return num2;
    }
    if(num3 > num1 && num3 > num2) {
        return num3;
    }
}

int main() {
    int a, b, c;
    printf("Insira 3 números:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && a == c) {
        printf("Todos os valores são iguais\n");
    }
    int resultado = getMax(a, b, c);
    printf("O maior número é %d\n", resultado);
}