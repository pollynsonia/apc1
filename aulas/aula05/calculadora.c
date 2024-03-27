#include <stdio.h>
#include <math.h>

int main() {
  int numero1;
  int numero2;

  printf("Entre com o primeiro numero: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Entre com o segundo número: ");
  int deu_certo2 = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos números é %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtração dos números é %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicação dos números é %i\n", multiplicacao);

  float divisao = 1.0f * numero1 / numero2;
  printf("A divisao dos números é %f\n", divisao);

  int resto = numero1 % numero2;
  printf("O resto da divisão é %i\n", resto);

  // numero1 = numero1 + 1;
  // incremento
  printf("O incremento do primeiro número é %i\n", numero1++);
  printf("O incremento do primeiro número é %i\n", ++numero1);

  // numero1 = numero1 - 1;
  // decremento
  printf("O decremento do primeiro número é %i\n", numero1--);
  printf("O decremento do primeiro número é %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro número é %f\n", raiz_quadrada);

  double potencia = pow(numero1, 4); //numero1^4
  printf("A quarta potência do número é %f\n", potencia);
  
  double logaritmo2 = log2(numero1);

  const double PI = 3.1416;
  double seno = sin(numero1 * (PI / 180)); //angulo em radiano * PI / 180
  printf("O seno do número é %f\n", seno);

  double cosseno = cos(numero1 * (PI / 180));
  printf("O cosseno do número é %f\n", cosseno);
  

  return 0;
}