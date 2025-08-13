#include <stdio.h>

int main(){
    /* Variáveis */
    int num[5];
    int media = 0;

    /* Obtenção de cada número para um ponteiro */
    for(int i = 0; i<5; i++){
        printf("Digite o número: ");
        scanf("%d", &num[i]);
        media = media + num[i];
    }

    /* Cálculo da média */
    media = media/5;
    printf("Média: %d\n",media);

    

    if(media<6){
        
    }
    return 0;
}