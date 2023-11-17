#include <stdio.h>

int main()
{
    char a,b;
    
    printf("Digite dois caracteres%c%c",a,b);
    scanf("%c %c",&a,&b);/*ao adiconar a tecla espaço entre os %c eu faço com que o computador desconsidere as teclas enter,
    espaço e o tab*/
    printf("primeiro caractere:%c\nsegundo caractere:%c",a,b);
   
   return 0;
}