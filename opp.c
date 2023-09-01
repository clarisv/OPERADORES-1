#include<stdio.h>

main(){

//Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 

int valorA, valorB, valorC, valorD, maiorValor, menorValor;

printf("digite o valor de A:");
scanf("%d", &valorA);

printf("digite o valor de B:");
scanf("%d", &valorB);

printf("digite o valor de C:");
scanf("%d", &valorC);
 
printf("digite o valor de D:");
scanf("%d", &valorD);

//encontrar o maior valor

if(valorA > maiorValor){
    maiorValor = valorA;
}
if(valorB > maiorValor){
    maiorValor = valorB;
}
if(valorC > maiorValor){
    maiorValor = valorC;
}
if(valorD > maiorValor){
    maiorValor = valorD;
}


//encontrar o menor valor

if(valorA < menorValor){
    menorValor = valorA;
}
if(valorB < menorValor){
    menorValor = valorB;
}
if(valorC < menorValor){
    menorValor = valorC;
}
if(valorD < menorValor){
    menorValor = valorD;
}

printf("o maior valor e: %d\n", maiorValor);
printf("o menor valor e: %d\n", menorValor);

return 0;

}
