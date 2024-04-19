/*Implemente um algoritmo capaz de simular uma previsão do tempo com as seguintes
regras: Se dia nublado “Temperatura agradável”, Se dia ensolarado “Temperatura Quente”,
Se dia chuvoso “Temperatura Fria”.*/
#include <stdio.h>
#include <string.h>

char tempo[20];

int main () {
    printf("Insira como esta o tempo: \n");
    scanf("%s", &tempo);
    if (strcmp(tempo, "nublado") == 0) {
        printf("Temperatura agradável.\n");
    } else if(strcmp(tempo, "ensolarado") == 0) {
        printf("Temperatura quente\n");
    } else if(strcmp(tempo, "chuvoso")) {
        printf("Temperatura fria.\n");
    }

}