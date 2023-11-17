#include <stdio.h>

int main()
//como descobrir o tamanho de memoria de cada variavel
{
    float x=1.0;
    printf("tamanho em memoria de int %d bytes\n",sizeof(int));// 4*8= 32 um inteiro ocupa 32 bits de memoria
    printf("tamanho em memoria de float %d bytes\n",sizeof x);// 4*8= 32 um float ocupa 32 bits de memoria
    printf("tamanho em memoria de char %d bytes",sizeof(char));// 1*8=8 um char ocupa 8 bits de memoria
   return 0;
}