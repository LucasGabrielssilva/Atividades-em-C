#include <stdio.h>

int main() {
  float num1, num2, operacao;
  char arit;

  scanf("%f%c%f", &num1, &arit, &num2);

  if (arit == '+') {
    operacao = (num1 + num2);
    printf("%.3f%c%.3f=%.3f\n", num1, arit, num2, operacao);
  } else if (arit == '-') {
      operacao = (num1 - num2);
      printf("%.3f%c%.3f=%.3f\n", num1, arit, num2, operacao);
    } else if (arit == '*') {
        operacao = (num1 * num2);
        printf("%.3f%c%.3f=%.3f\n", num1, arit, num2, operacao);
      } else if (arit == '/') {
          operacao = (num1 / num2);
          printf("%.3f%c%.3f=%.3f\n", num1, arit, num2, operacao);
        } else {
          printf("Operador invalido\n");
        }
      
  return 0;
}