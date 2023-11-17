#include <stdio.h>

int main()
{
   char sexo;
   int  idade;
   float peso, altura;
   
   printf("digite o sexo(F,f,M e m), idade, peso e altura\n");
   scanf("%c%d%f%f",&sexo,&idade,&peso,&altura);
   
   printf("os valores digitados foram\nsexo:%c\nidade:%d\npeso:%.1f\naltura:%.2f\n",sexo,idade,peso,altura);
   
   return 0;
}