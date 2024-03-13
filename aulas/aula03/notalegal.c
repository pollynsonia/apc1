#include <stdio.h>

int main() {

  printf("\x1b[31m--------------------------\n");
  printf("    N O T A L E G A L     \n");
  printf("--------------------------\x1b[0m\n");
  printf("\x1b[31mITEM            QTD  VALOR\x1b[0m\n");
  printf("%-15s %03i %7.2f\n" , "Banana nanica", 2, 20.00);
  printf("%-15s %03i %7.2f\n" , "Uva Globo", 1, 15.00);
  printf("%-15s %03i %7.2f\n" , "Laranja Lima", 1, 18.00);
  
//printf("Banana nanica    2   20.00\n");
//printf("Uva Globo        1   15.00\n");
//printf("Laranja Lima     1   18.00\n");
  
  printf("--------------------------\n");
  printf("Total           %11.2f\n", 73.00);
 
   
  return 0;
}