#include <stdio.h>

int main() {
    int idade;
    printf("insira a idade:\n");
    scanf("%d", &idade);
    if (idade < 18 || idade > 95) {
        printf("Voce nao pode tirar a carteira de motorista\n");
    } else {
        printf("Voce pode tirar a carteira %d anos\n", idade);
    }
}