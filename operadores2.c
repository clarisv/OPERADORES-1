#include<stdio.h>

main(){

  //Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 

  int A = 10, B = 8, C = 6, D = 4, maior, menor;
  
  //verificar o maior de todos
  if(A > B && A > C && A > D){
     maior = A;
  }else if(B > A && B > C && B > D){
     maior = B;
  }else if(C > B && C > A && C > D){
     maior = C;
  }else{
     maior = D;
  }
   
  //verificar o menor de todos
  if(A < B && A < C && A < D){
     menor = A;
  }else if(B < A && B < C && B < D){
     menor = B;
  }else if(C < B && C < A && C < D){
     menor = C;
  }else{
     menor = D;
  }
  printf("maior: %d,. menor: %d", maior, menor);
}
