/*
7. Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
*/

#include <stdio.h>

int main() {

  float valor_da_hora_de_trabalho = 150.0f;
  float total_de_horas_trabalhadas_no_mes = 100.0f;

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas_no_mes;
  float valor_imposto_de_renda = salario_bruto * IR;
  float valor_imposto_previdencia = salario_bruto * INSS;
  float valor_salario_liquido = salario_bruto - valor_imposto_de_renda - valor_imposto_previdencia;

  printf("\x1b[30m--------------------------------\n");
  printf("     C O N T R A C H E Q U E \n");
  printf("--------------------------------\x1b[0m\n");
  printf("Salario bruto.........: R$ \x1b[32m%7.2f\x1b[0m\n", salario_bruto);
  printf("Imposto de renda......: R$ \x1b[31m%8.2f\x1b[0m\n", valor_imposto_de_renda);
  printf("Imposto previdencia...: R$ \x1b[31m%8.2f\x1b[0m\n", valor_imposto_previdencia);
  printf("Salario liquido.......: R$ \x1b[32m%8.2f\x1b[0m\n", valor_salario_liquido);
    
  
  return 0;
}
  