
#include <stdio.h>

int main() {
    int v[5];
    int maior, soma = 0;
    float media;

    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &v[i]);

        soma += v[i];

        if (i == 0 || v[i] > maior) {
            maior = v[i];
        }
    }

    media = soma / 5.0;

    printf("Maior: %d\n", maior);
    printf("Media: %.2f\n", media);

    return 0;
}
