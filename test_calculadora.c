#include <stdio.h>
#include <assert.h>
#include "function_multiplicar.h"

int main()
 {
    int product1 = multiplicar(2, 0);
    int product2 = multiplicar(3, 6);
    int product3 = multiplicar(42, 64);
    assert(product1 == 2*0);
    assert(product2 == 3*6);
    assert(product3 == 42*64);
    printf("Teste executado com sucesso");
    return 0;

  printf("\nCriado por Marcell Augusto (https://github.com/olivermarcell30-dotcom");
}
