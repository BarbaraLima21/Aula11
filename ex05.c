#include <stdio.h>

int main() {
    float numeros[2];

    for(int i = 0; i < 2; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    printf("Numeros digitados:\n");
    printf("numeros[0] = %.2f\n", numeros[0]);
    printf("numeros[1] = %.2f\n", numeros[1]);

    return 0;
}
