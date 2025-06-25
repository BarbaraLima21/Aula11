#include <stdio.h>

void maior(int numeros[]) {
    if (numeros[1] > numeros[0]) {
        int temp = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = temp;
    }
}

int main() {
    int numeros[2];

    for(int i = 0; i < 2; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Antes: %d %d\n", numeros[0], numeros[1]);

    maior(numeros);

    printf("Depois: %d %d\n", numeros[0], numeros[1]);

    return 0;
}
