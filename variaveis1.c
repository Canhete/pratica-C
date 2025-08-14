#include <stdio.h>
/*Importação da biblioteca de entrada e saída*/

int main(void) {
    /* Declação das variáveis 
    Note que qualquer nome pode ser aplicado para as variáveis*/
    int a;
    int A;
    int b;
    int soma;

    /* Atribuição de valores para as variáveis*/
    A = 10;
    a = 20;
    b = 50;
    /* Cálculo da variável 'soma'*/
    soma = A + a + b;
    
    /* Saída dos resultados
    o %d indica os lugares aonde será substituido por uma variável do tipo0 int (inteiro)
    portanto, nesse caso será impresso os números inteiros das variáveis
    e a soma delas */
    printf("a: %d, A: %d, b: %d,\n soma: %d\n", a, A, b, soma);

    /* A função printf imprime na tela o que está entre aspas, e o que está fora*/
    /* A função \n indica uma quebra de linha, ou seja, o que estiver depois dela será impresso na linha de baixo*/
    
    return 0; /* Fim do programa, retornando o código 0*/
}
