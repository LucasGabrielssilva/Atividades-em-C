#include <stdio.h>
//A função fgetc serve para ler apartir de arquivos, no caso eu uso aqui para ler apartir da entrada padrão do pc o teclado stdin
int main()
{
    char letra;
    printf("digite a variavel:%C",letra);
    letra = fgetc(stdin);

    printf("foi digtado:%c",letra);







    return 0;
}