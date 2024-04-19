#include <stdio.h>

/*
Implemente um algoritmo em C para classificar os nadadores
escritos em uma competição de acordo com a idade
informada indicar a categoria do atleta:
• infantil A = 5 a 7 anos
• infantil B = 8 a 10 anos
• juvenil A = 11 a 13 anos
• juvenil B = 14 a 17 anos
• adulto = maiores de 18 anos
*/

int main() {
    int idade;
    printf("insira a idade: \n");
    scanf("%d", &idade);
    if (idade >= 5 && idade <= 7) {
        printf("Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Juvenil B\n");
    } else if (idade >= 18) {
        printf("Adulto\n");
    }
}