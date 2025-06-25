#include <stdio.h>

float dobro(float numeros[]) {
    for(int i = 0; i < 2; i++) {
        numeros[i] = numeros[i] * 2.0;
    }
    return (numeros[0] + numeros[1]) / 2;
}

int main() {
    float numeros[2];

    for(int i = 0; i < 2; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    float nova_media = dobro(numeros);

    printf("Valores dobrados:\n");
    for(int i = 0; i < 2; i++) {
        printf("numeros[%d] = %.2f\n", i, numeros[i]);
    }

    printf("Nova media: %.2f\n", nova_media);

    return 0;
}
