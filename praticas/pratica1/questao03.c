/*
3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main() {
  int r;

  printf("Valor do raio: ");
  scanf("%i", &r);
  
  const float PI = 3.1416;
  float perimetro = 2 * PI * r;

  printf("O perimetro da pizza eh: %f\n", perimetro);
  
  return 0;
}
