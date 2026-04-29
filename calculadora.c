#include <stdio.h>
#include "function_multiplicar.h"

void main() {
    int opcao; 
    int continuar;
    
    do {
        printf("\n=== CALCULADORA ===\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Divisao\n");
        printf("4 - Multiplicacao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        if (opcao == 4) {
            int a, b, resultado;
            printf("Digite o primeiro numero: ");
            scanf("%d", &a);
            printf("Digite o segundo numero: ");
            scanf("%d", &b);
            
            resultado = multiplicar(a, b);
            printf("Resultado: %d * %d = %d\n", a, b, resultado);
        } else {
            printf("Opcao indisponivel.\n");
        }
        
        printf("\nDeseja fazer outra operacao?\n");
        printf("1 - Sim\n");
        printf("0 - Nao\n");
        printf("Sua escolha: ");
        scanf("%d", &continuar);
        
    } while (continuar == 1);
    
    printf("\nFeito por Marcell Augusto (https://github.com/olivermarcell30-dotcom) ");

}
