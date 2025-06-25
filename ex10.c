#include <stdio.h>

void maior(int numeros[]) {
    if (numeros[1] > numeros[0]) {
        int temp = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = temp;
    }
}

void imprimirVetor(int numeros[]) {
    printf("%d %d\n", numeros[0], numeros[1]);
}

int main() {
    int numeros[2];

    for(int i = 0; i < 2; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Antes: ");
    imprimirVetor(numeros);

    maior(numeros);

    printf("Depois: ");
    imprimirVetor(numeros);

    return 0;
}
