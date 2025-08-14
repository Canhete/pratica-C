#include <stdio.h>

int main(void) {
    int n; // Declaração de variável inteira

    printf("Digite um numero inteiro: ");
    scanf("%d", &n); // Obtém o número inteiro
    
    if(n > 0) { /* Se o número for maior que zero, imprime um texto dizendo que é positivo */
        printf("O número %d é positivo.\n", n); 
    }
    return 0;
}