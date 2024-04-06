#include <stdio.h>
#include <string.h>

int main() {
    int idade;
    char exame[20];
    printf("insira a idade:\n");
    scanf("%d", &idade);
    printf("insira o exame:\n");
    scanf("%s", exame);
    if(idade >= 18 && idade <= 95 && strcmp(exame, "Aprovado") == 0){
        printf("Sua carteira de motorista estará pronta em uma semana\n");
    } else {
        printf("Você não possui idade permitida ou não passou no teste\n");
    }
}

/*compare strings https://www.shiksha.com/online-courses/articles/strcmp-function-in-c/#:~:text=In%20C%20programming%20language%2C%20strcmp,between%20the%20strings%20being%20compared.&text=Here%2C%20str1%20and%20str2%20are,that%20are%20to%20be%20compared.*/