#include <stdio.h>

int main() {
    int salario;
    printf("insira o salario:\n");
    scanf("%d", &salario);
    /*printf("%d\n", salario);*/
    if(salario > 1800 && salario < 8000) {
        printf("Salário válido para financiamento\n");
    } else {
        printf("Salário fora da faixa permitida para financiamento\n");
    }
}