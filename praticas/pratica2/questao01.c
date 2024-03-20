/*
1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números.
*/

#include <stdio.h>

int main() {
  float n1, n2, n3;
  
  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);
  
  printf("Digite o segundo numero: ");
  scanf("%f", &n2);
  
  printf("Digite o terceiro numero: ");
  scanf("%f", &n3);

  float media_aritmetica = (n1 + n2 + n3) / 3;
  printf("A media aritmetica eh: %.2f\n", media_aritmetica);

  
  return 0;
}