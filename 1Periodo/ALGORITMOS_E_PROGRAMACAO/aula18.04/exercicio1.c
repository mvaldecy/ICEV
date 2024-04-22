#include <stdio.h>
#include <stdlib.h>
float ProdutoA, ProdutoB, ProdutoC, SomaAB, SomaBC;

int main() {

    printf("Digite o valor do Produto A.\n");
    scanf("%f", &ProdutoA);
    printf("Digite o valor do Produto B.\n");
    scanf("%f", &ProdutoB);
    printf("Digite o valor do Produto C.\n");
    scanf("%f", &ProdutoC);
    SomaAB = ProdutoA + ProdutoB;
    SomaBC = ProdutoB + ProdutoC;
}