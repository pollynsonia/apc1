/*
2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.
*/

#include <stdio.h>

int main() {
  int n1, n2;

  
  printf("Digite o primeiro numero: ");
  scanf("%i", &n1);

  printf("Digite o segundo numero: ");
  scanf("%i", &n2);

  int quociente = n1 / n2;
  int resto = n1 % n2;

  printf("O quociente eh: %i\n", quociente);
  printf("O resto eh: %i\n", resto);

  
  return 0;
}