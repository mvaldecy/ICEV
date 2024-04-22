/*Implemente um Algoritmo que Dado um número inteiro no formato CDU(Centena, Dezena e
Unidade), exibir o número no formato UDC(Unidade, Dezena e Centena). Exemplo:123, será 321.
O número deverá ser atribuído a uma variável antes de ser exibido.*/

#include <stdio.h>

char cdu[3], i, aux;

int main() {
    printf("Insira um número de 3 algarismos.\n");
    scanf("%s", cdu);
    aux = cdu[0];
    
    cdu[0] = cdu[2];
    cdu[2] = aux;
    printf("%s\n", cdu);
}