#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void){
    int n; // Declaração de variável inteira
    bool verdade = true; // Booleano definido como verdadeiro

    while (verdade){
        /* Loop que continua enquanto 'verdade' for verdadeiro
           Solicita a digitação de um número inteiro */

        printf("Digite um número inteiro: ");
        scanf("%d", &n);

        if (n == 0) { /* Verifica se o número é zero */
            printf("O número %d é zero.\n", n);
        } else if (n % 2 == 0) { /* Verifica se o número é par */
            printf("O número %d é par.\n", n);
        } else { /* Se não for zero nem par, é ímpar */
            printf("O número %d é ímpar.\n", n);
        }   
            /* Verificação se o usuário deseja digitar mais números*/

        printf("Deseja continuar? (1 para sim, 0 para não): ");
        int vtemp; // Variável temporária para armazenar a resposta do usuário
        scanf("%d", &vtemp);
        verdade = vtemp;

        if (verdade == 0) { // Se o usuário digitar 0, o loop termina
            verdade = false; // Define 'verdade' como falso
            printf("Programa encerrado.\n");
            break; // Encerra o loop se o usuário não quiser continuar
        }
    }
    return 0;
}