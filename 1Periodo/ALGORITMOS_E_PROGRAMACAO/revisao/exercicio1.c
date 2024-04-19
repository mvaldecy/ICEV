#include <stdio.h>

float salarioMinimo;
int kwConsumido;
float valorKw, consumo;

int main(){
    printf("Insira o valor do salário mínimo: \n");
    scanf("%f", &salarioMinimo);
    printf("Insira a quantidade de energia consumida:\n");
    scanf("%d", &kwConsumido);
    valorKw = salarioMinimo / 700;
    consumo = valorKw * kwConsumido;
    printf("Valor do quilowatt: R$ %.2f\n", valorKw);
    printf("Valor da conta de energia: R$ %.2f\n", consumo);
    printf("Valor da conta com desconto: R$ %.2f\n", consumo*0.9);


}