#include <stdio.h>
int main() {
  int numero;
  
  printf("Entre com um número inteiro: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo) {
    int qntde_divisores = 0;
    for(int i = 1; i <= numero; i++) {
      if (numero % i == 0) {
        qntde_divisores++;
      }
    }
    if (qntde_divisores == 2) {
      printf("O numero %i é primo\n", numero); 
      } else {
      printf("O numero %i não é primo!\n", numero);
    }
  } else {
    printf("Número inválido\n");
  }
  
  return 0;
}