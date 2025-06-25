#include <stdio.h>

float media(float numeros[]) {
    return (numeros[0] + numeros[1]) / 2;
}

int main() {
    float numeros[2];

    for(int i = 0; i < 2; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    float resultado = media(numeros);
    printf("Media: %.2f\n", resultado);

    return 0;
}
