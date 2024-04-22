#include <stdio.h>
#include <string.h>
float h, pesoIdeal;
char sexo[5];

int main() {
    printf("Insira o Sexo: M - masculino, F - Feminino\n");
    scanf("%c", &sexo);
    printf("Insira a altura:\n");
    scanf("%f", &h);
    if (strcmp(sexo, "M") == 0) {
        pesoIdeal = (h * 72.7) - 58;
    } else if (strcmp(sexo, "F") == 0) {
        pesoIdeal = (62.1 * h) - 44.7;
    }
    printf("O peso ideal é: %.2f\n", pesoIdeal);
}