#include <stdio.h>
#include <math.h>

int main()
{
    float x1,x2,y1,y2;
    float distancia;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    distancia = sqrt( pow(x2-x1, 2) + pow(y2-y1, 2) );
    if(distancia<0.0000001){
        printf("os pontos sao iguais\n");
    }
    else{
        printf("os pontos nao sao iguais\n");
        }
    return 0;
} 