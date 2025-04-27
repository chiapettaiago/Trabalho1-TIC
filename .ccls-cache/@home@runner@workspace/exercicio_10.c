#include <stdio.h>
#include <math.h>

int main() {
    int idade, count = 0;
    double soma = 0.0, soma_quadrados = 0.0, media, desvio_padrao;

    while (1) {
        printf("Digite a idade (valor negativo para encerrar): ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        soma += idade;
        soma_quadrados += idade * idade;
        count++;
    }

    if (count == 0) {
        printf("Nenhuma idade válida foi informada.\n");
        return 0;
    }

    media = soma / count;
    desvio_padrao = sqrt((soma_quadrados / count) - (media * media));

    printf("Idade média: %.2lf\n", media);
    printf("Desvio padrão: %.2lf\n", desvio_padrao);

    return 0;
}
