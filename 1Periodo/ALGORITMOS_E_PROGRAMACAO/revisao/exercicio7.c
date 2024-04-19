/*Implemente um algoritmo que calcule a idade de uma pessoa em dias, sendo que o valor
digitado para idade deverá ser uma idade completa (Ex. 25 anos). Se a quantidade de dias
for menor que 6.570 imprimir (“Você é menor de idade”), se não (“Você é maior de idade”).
*/
#include <stdio.h>

int idade, idade_dias;

int main() {
    printf("Insira a idade: \n");
    scanf("%d", &idade);
    idade_dias = idade * 365;
    if(idade_dias < 6570) {
        printf("Você é menor de idade.\n");
    } else {
        printf("Vocẽ é maior de idade.\n");
    }
}