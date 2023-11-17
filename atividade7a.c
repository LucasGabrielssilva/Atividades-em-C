
#include <stdio.h>
#include <string.h>
int main()
{
    char palavra[80];
    int i;
    fgets(palavra,80, stdin);
    
    for(i=80;i<strlen(palavra);i++)
    {   
        fgets(palavra,80,stdin);
    
    }
    return 0;
    
}
