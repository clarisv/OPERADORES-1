#include<stdio.h>
main(){



    //Escreva um algoritmo que leia um número e imprima a raiz quadrada do número 
    //caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.


  double numero, resultado;

  printf("digite um numero");
  scanf("%lf", &numero);

  if(numero >= 0){
    //se verdadeiro calcular raiz quadrada
    resultado = sqrt (numero);
    printf("raiz quadrada de %lf e %lf", numero, resultado);

  }else{
    resultado = pow (numero, 2);
    printf("o quadrado de %lf e %lf", numero, resultado);


  }

}
