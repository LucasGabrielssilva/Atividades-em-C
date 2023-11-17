#include <stdio.h>
#include<math.h>
float media(); 
int main(){ 
    
    printf("%0.3f\n", media()); 
    
    return 0;
}
float media(){ 
    float nota, nota2; 
    char caracter; 
    float resultado; 
    
	caracter = getchar();

    scanf("%f %f",&nota, &nota2); 
    
    if(caracter == 'A'){
        resultado = ((nota+nota2)/2); 
    }
    else{
        resultado = sqrt(nota*nota2); 
    }
    return resultado;
} 
