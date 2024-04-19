/*Elabore um algoritmo que seja capaz de representar um cardápio de uma lanchonete, conforme
o exemplo a seguir. No algoritmo deverá ser informado o código do item pedido, a quantidade e
calcule o valor a ser pago por aquele lanche. Considere que a cada execução somente será
calculado um item.
LANCHONETE - LANCHEBEM
Especificação Código Preço
Cachorro quente 100 4,2
Bauru simples 101 3,3
Bauru com ovo 102 5,5
Hambúrger 103 6,2
Cheeseburguer 104 5,3
Refrigerante 105 4,5
*/
#include <stdio.h>

int codigo, quantidade;
float valor_total;

int main() {
    printf("Insira o código do lanche.\n");
    scanf("%d", &codigo);
    printf("Insira a quantidade do pedido.\n");
    scanf("%d", &quantidade);
    switch (codigo)
    {
    case 100:
        valor_total = quantidade * 4.2;
        break;
    case 101:
        valor_total = quantidade * 3.3;
        break;
    case 102:
        valor_total = quantidade * 5.5;
        break;
    case 103:
        valor_total = quantidade * 6.2;
        break;
    case 104:
        valor_total = quantidade * 5.3;
        break;
    case 105:
        valor_total = quantidade * 4.5;
        break;
    default:
        break;
    }
    printf("Valor total: R$ %.2f.\n", valor_total);
}