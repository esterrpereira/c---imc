#include <stdio.h>

int main() {
  float imc, peso, altura;
  
  printf("DIGITE O SEU PESO: ");
  scanf("%f", &peso );
   printf("DIGITE O SUA ALTURA: ");
  scanf("%f", &altura );

  imc = peso / (altura * altura) ;
  printf("SEU IMC É: %f", imc);


  
}