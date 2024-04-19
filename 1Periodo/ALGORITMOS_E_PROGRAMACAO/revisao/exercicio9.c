/*Implemente um alguritmo que receba um número inteiro e imprima seu sucessor e o
antecessor de um número*/
#include <stdio.h>
int numero, antecessor, sucessor;

int main() {
    printf("Insira um número: \n");
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("Antecessor: %d \n", antecessor);
    printf("Número: %d \n", numero);
    printf("Sucessor: %d \n", sucessor);

}

