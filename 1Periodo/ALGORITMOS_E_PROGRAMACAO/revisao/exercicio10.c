/*Implemente um algoritmo que receba um número inteiro e identifique se ele é múltiplo de
2, 3 ou 5, imprima o resultado.*/

#include <stdio.h>

int num;

int main() {
    printf("Insira um número: \n");
    scanf("%d", &num);
    if (num % 2 == 0 && num % 3 == 0&& num % 5 == 0) {
        printf("É multiplo de 2, 3, 5\n");
    } else {
        printf("Não é multiplo.\n");
    }
}