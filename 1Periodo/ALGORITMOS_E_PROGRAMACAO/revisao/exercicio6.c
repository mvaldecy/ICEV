/*Implemente um algoritmo que represente as quatro operações básica da matemática
(Somar, Subtrair, Multiplicar e Dividir) utilizando como valor de entrada dois números
inteiros. Conforme MENU apresentado a seguir, deverá ser levado em consideração que
serão digitados somente dois números para a realização das operações. (Use a estrutura
de múltipla escolha)
CALCULADORA SIMPLES
1-SOMAR 2-SUBTRAIR
3-MULTIPLICAR 4-DIVIDIR
5-FINALIZAR OPERAÇÃO*/

#include <stdio.h>
int num1, num2, operacao;
float resultado;


int main() {
    printf("Insira o primeiro número:\n");
    scanf("%d", &num1);
    printf("Insira o segundo número:\n");
    scanf("%d", &num2);
    printf("Insira a operação:\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n5 - Finalizar operação.\n");
    scanf("%d", &operacao);
    switch (operacao)
    {
    case 1:
        resultado = num1 + num2;
        break;
    case 2:
        resultado = num1 - num2;
        break;
    case 3:
        resultado = num1 * num2;
        break;
    case 4:
        resultado = num1 / num2;
        break;
    default:
        break;
    }
    if (operacao == 5) {
        printf("Operação finalizada.\n");
    } else {
        printf("%.2f\n", resultado);
    }
}