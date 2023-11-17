#include <stdio.h>

int
main ()
/*
       Lendo números inteiros
*/
{
  int valor, valor2;		//criei uma variavel do tipo inteiro 
  valor = 50;

  printf ("digite um número:");
  scanf ("%d", &valor);		//utilizei a função scanf para ler um número inteiro do meu teclado

  printf ("digite um segundo número:");
  scanf ("%d", &valor2);	//utilizei a função scanf para ler um número inteiro do meu teclado

  printf
    ("\n\no valor do primeiro numero é:%d\no do segundo número é:%d\n\n", valor, valor2);
  //utilizei a função printf para imprimir os os dois números inteiros que eu digitei


  return 0;
}
