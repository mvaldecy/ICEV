#include <stdio.h>

int main() {
    int idade;
    char exame[20];
    printf("insira a idade:\n");
    scanf("%d", &idade);
    printf("insira o exame:\n");
    scanf("%s", &exame);
    if(idade >= 18 && idade <= 95 && exame == "Aprovado"){
        printf("Sua carteira de motorista estará printa em uma semana");
    } else {
        printf("Você não possui idade permitida ou não passou no teste");
    }



}