/*
5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/

#include <stdio.h>
#include <math.h>

int main() {
  long int gigabytes;
  printf("Valor em gigabytes: ");
  scanf("%li", &gigabytes);
  
  double bytes = gigabytes * pow(1024, 3);

  printf("Valor em bytes: %f\n", bytes);
  
  return 0;
}