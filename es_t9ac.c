#include <stdio.h>
#include<math.h>


float soma(float numero1, float numero2); 
float subtracao(float numero1, float numero2);
float multiplicacao(float numero1, float numero2);
float divisao(float numero1, float numero2);
float elevado(float numero1, float numero2);

int main(){ 
    
        float numero1, numero2;
        char operador;
        float resultado;
        scanf("%f%c%f", &numero1 , &operador , &numero2);
        
        switch(operador){
        
        case '+':
            resultado = soma(numero1,numero2);
            printf("%.3f\n",resultado);
            break;
        case '-':
            resultado = subtracao(numero1,numero2);
            printf("%.3f\n",resultado);
            break;
        case '*':
            resultado = multiplicacao(numero1,numero2);
            printf("%.3f\n",resultado);
            break;
        case '/':
            resultado = divisao(numero1,numero2);
            printf("%.3f\n",resultado);
            break;
        case '^':
            resultado = elevado(numero1,numero2);
            printf("%.3f\n",resultado);
            break;

    }
    
    
    return 0;
}

float soma(float numero1, float numero2) 
{
    float resultado;
    resultado = numero1+numero2;
    return resultado ;
} 
float subtracao(float numero1, float numero2) 
{
    float resultado;
    resultado = numero1-numero2;
    return resultado ;
} 
float multiplicacao(float numero1, float numero2) 
{
    float resultado;
    resultado = numero1*numero2;
    return resultado ;
} 
float divisao(float numero1, float numero2) 
{
    float resultado;
    resultado = numero1/numero2;
    return resultado ;
} 
float elevado(float numero1, float numero2) 
{
    float resultado;
    resultado = pow(numero1,numero2);
    return resultado ;
} 