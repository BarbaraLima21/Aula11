#include <stdio.h>

float media(float numeros[]) {
    return (numeros[0] + numeros[1]) / 2;
}

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

    printf("Vetor antes de media():\n");
    for(int i = 0; i < 2; i++) {
        printf("numeros[%d] = %.2f\n", i, numeros[i]);
    }

    float media_inicial = media(numeros);
    printf("Media inicial: %.2f\n", media_inicial);

    float media_dobrada = dobro(numeros);
    printf("Vetor apos dobro():\n");
    for(int i = 0; i < 2; i++) {
        printf("numeros[%d] = %.2f\n", i, numeros[i]);
    }
    printf("Nova media apos dobro: %.2f\n", media_dobrada);

    return 0;
}
