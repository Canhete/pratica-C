#include <stdio.h>

int main(void){
    // Declaração de variável inteira
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Estrutura de controle if-else
    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }

    // Estrutura de controle switch-case
    switch (numero) {
        case 1:
            printf("O número é um.\n");
            break;
        case 2:
            printf("O número é dois.\n");
            break;
        default:
            printf("O número não é nem um nem dois.\n");
    }
    return 0;
}