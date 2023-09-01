#include <stdio.h>

main() {

  int valorA, valorB, valorC;
    
  printf("Digite três valores: ");
  scanf("%d %d %d", &valorA, &valorB, &valorC);
    
    // Ordenação utilizando a lógica de trocas

    if (valorA < valorB) {
        int temp = valorA;
        valorA = valorB;
        valorB = temp;
    }
    
    if (valorB < valorC) {
        int temp = valorB;
        valorB = valorC;
        valorC = temp;
    }
    
    if (valorA < valorB) {
        int temp = valorA;
        valorA = valorB;
        valorB = temp;
    }
    
    printf("Valores em ordem decrescente: %d %d %d\n", valorA, valorB, valorC);
    
  
}
