/*∆ 1.12.1.  Fazer um algoritmo que: - 
Leia um número indeterminado de linhas contendo cada uma a idade de um indivíduo. 
A última linha que não entrará nos cálculos, contém o valor da idade igual a zero. - 
Calcule e escreva a idade média deste grupo de indivíduos. -*/

#include <stdio.h>

int main(void){
    // Variáveis

    float idade, soma, quantidade, media;

    quantidade = 0;
    soma = 0;

    while (1){
        printf("Digite a idade (0 para sair): ");
        scanf("%f", &idade);
        quantidade++;
        soma += idade;
        soma = soma + idade;

        if (idade == 0){
            break;
        }
    }

    // Cálculo da média
    
    media = idade / quantidade;
    printf("A média de idades é: %d\n", media);
}