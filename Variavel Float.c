#include <stdio.h>

int
main ()
/*
       Lendo números inteiros
*/
{
  float numero;//criei uma varieavel do tipo float.
  numero = 3.1415;
  
  //determinei que só mostraria duas casas depois da 'virgula'.
  printf("o valor é de:%.2f\n",numero);
 
  printf("digite um numero real: ");
  scanf("%f", &numero);//pedi para que digitasse um número real.
  printf("o numéro digitado foi:%.3f",numero);//determinei que só mostraria três casas depois da 'virgula'.
  
  return 0;
}
