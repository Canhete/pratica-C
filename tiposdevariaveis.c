#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
        /* Declaração de variáveis e constantes*/
    
    int a = 10;                    // Inteiro, pode ser positivo ou negativo
    float b = 12.5;                // Ponto flutuante, pode ser positivo ou negativo
    char c = 'A';                  // Caractere, pode ser uma letra ou símbolo
    double d = 123e4;              // Ponto flutuante de dupla precisão, pode ser positivo ou negativo
    void *v = NULL;                // Ponteiro genérico, pode apontar para qualquer tipo de dado
    bool e = 1;                    // Booleano, aonde 1 = verdadeiro, 0 = falso
    #define PI 3.1415926           // Definição de um valor constante, não pode ser alterado
    const int f = 20;              // Constante, não pode ser alterada
    const int *g = &a;             // Ponteiro constante, não pode ser alterado, mas o valor apontado pode ser alterado
    const int *const h = &a;       // Ponteiro constante, não pode ser alterado, nem o valor apontado

        /* Exibindo os valores das variáveis */
    printf("Valor de a: %d\n", a);     // Exibe o valor de a
    printf("Valor de b: %.2lf\n", b);  // Exibe o valor de b com 2 casas decimais
    printf("Valor de c: %c\n", c);     // Exibe o valor de c
    printf("Valor de d: %.2lf\n", d);  // Exibe o valor de d com 2 casas decimais
    printf("Valor de v: %p\n", v);     // Exibe o valor de v (NULL)
    printf("Valor de e: %d\n", e);     // Exibe o valor de e (1 = verdadeiro)
    printf("Valor de PI: %.7f\n", PI); // Exibe o valor de PI com 7 casas decimais
    printf("Valor de f: %d\n", f);     // Exibe o valor de f (constante)
    printf("Valor de g: %p\n", g);     // Exibe o valor de g (endereço de a)
    printf("Valor de h: %p\n", h);     // Exibe o valor de h (endereço de a)
    printf("Valor de *g: %d\n", *g);   // Exibe o valor apontado por g (valor de a)
}