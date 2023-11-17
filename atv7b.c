#include <stdio.h>  
#include <string.h>
#include <ctype.h>

int  main()  
{     
    char  str1[30];  
    int  i, o, p = 0;  
      
    scanf( "%s" , str1);  
    o = strlen(str1);  

    for(i = 0; i < o; i++)  
    {     
        if  (tolower(str1[i]) != tolower(str1[o - i - 1]))  
        {  
            p = 1;   
            break ;   
        }  
    }  
    if  (p)  
    {  
        printf("Esta palavra nao e um palindromo\n");  
    }  
    else  
    {  
        printf("Esta palavra e um palindromo\n");  
    }  
    
    return  0;  
}