/*Implemente uma algoritmo que capaz de imprimir o mês do ano, sendo que quando o
usuário digitar entre o intervalo de 1 a 12 será impresso o mês correspondente ao número (Ex.
Se o usuário digitar o número 3 deverá ser impresso o mês de MARÇO). O algoritmo deverá
prever os valores digitados fora desse intervalo estabelecido.*/

#include <stdio.h>

int main() {
    int inputNum;
    char *month[] = {
        "Janeiro",
        "Fevereiro",
        "Março",
        "Abril",
        "Maio",
        "Junho",
        "Julho",
        "Agosto",
        "Setembro",
        "Outubro",
        "Novembro",
        "Dezembro"
    };
    
    printf("Insira o número do mês\n");
    scanf("%d", &inputNum);
    if (inputNum < 1 || inputNum > 12) {
        printf("insira um numero valido\n");
    } else {
        printf("%s\n", month[inputNum - 1]);
    }
}