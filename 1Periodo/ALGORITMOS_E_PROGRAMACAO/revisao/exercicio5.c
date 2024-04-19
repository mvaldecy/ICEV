/*Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no
último ano. Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do
crédito de acordo com a tabela abaixo. Deverá se exibido para o cliente uma mensagem
informando o saldo médio e o valor do crédito.  
Saldo médio ----- Percentual de credito
de 0 a 200 --------- nenhum crédito
de 201 a 400 ------- 20% do valor do saldo médio
de 401 a 600 ------- 30% do valor do saldo médio
acima de 601 ------- 40% do valor do saldo médio*/
#include <stdio.h>

float saldo_medio, resposta;

int main() {
    printf("Insira o saldo medio:\n");
    scanf("%f", &saldo_medio);
    
    if (saldo_medio >=0 && saldo_medio <= 200) {
        resposta = 0;
    } else if (saldo_medio >= 201 && saldo_medio <=400) {
        resposta = 0.2 * saldo_medio;
    } else if (saldo_medio >= 401 && saldo_medio <= 600) {
        resposta = 0.3 * saldo_medio;
    } else if (saldo_medio >= 601) {
        resposta = 0.4 * saldo_medio;
    }

    printf("Saldo médio: R$%.2f\n", saldo_medio);
    printf("Crédito: R$%.2f.\n", resposta);    
}
