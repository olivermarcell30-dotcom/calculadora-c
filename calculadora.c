##include <stdio.h>
#include "function_multiplicar.h"

int main()
    {
    int input = 0;
    int num1 = 0;
    int num2 = 0;

    printf("Calculadora\n\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Divisao\n");
    printf("4 - Multiplicacao\n\n");
    printf("--> ");
    scanf("%d", &input);

    switch(input)
    {
        case 4:
            printf("\n\nDigite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
            printf("O produto e: %d", multiplicar(num1, num2));
            break;
        
        default:
            printf("Opção indisponível");
            break;
    }
    printf("\nCriado por Marcell Augusto (https://github.com/olivermarcell30-dotcom) ");

}
    return 0;

