#include <stdio.h>

int main(void) {
    int n; // Declaração de variável inteira
    int m;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n); // Obtém o primeiro número inteiro

    printf("Digite outro numero inteiro: ");
    scanf("%d", &m); // Obtém o segundo número inteiro
    
    if(n == m) { /* Se os números são iguais imprime que são iguais */
        printf("O número %d é igual ao número %d\n", n, m); 
    } else {
        printf("O número %d é diferente do número %d\n", n, m); // Se não, imprime que são diferentes
    }
    return 0;
}