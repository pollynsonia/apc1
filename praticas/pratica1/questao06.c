/*
 Faça um programa em C que calcule as raízes de uma equação do 2° grau através da fórmula de Bhaskara (-b +/- raiz_quadrada(b² - 4ac)/2a).
*/

#include <stdio.h>
#include <math.h>
int main() {

  float a , b , c, delta, x1, x2;
  
  printf("Digite o valor de a: ");
  int deu_certo = scanf("%f", &a);
  
  printf("Digite o valor de b: ");
  int deu_certo2 = scanf("%f", &b);
  
  printf("Digite o valor de c: ");
  int deu_certo3 = scanf("%f", &c);

  delta = pow(b,2) - 4*a*c;
  printf("Delta: %f\n", delta);
  
  x1 = (- b + sqrt(delta)) / (2 * a);
  printf("X1: %f\n", x1);
  
  x2 = (- b - sqrt(delta)) / (2 * a);
  printf("X2: %f\n", x2);

  

  

  return 0;
}