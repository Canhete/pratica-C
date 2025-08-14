#include <stdio.h>
#include <stdlib.h>

int main(void){
    while (1) {
        int n;
        printf("\nDigite um número: ");
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        printf("O número digitado é: %d\n", n);	
    }
    return (0);
}