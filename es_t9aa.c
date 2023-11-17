#include <stdio.h>
#include<math.h>

float volume_esfera()
{
    
    float raio;
    float pi = 3.14159;
    float volume;
    
    scanf("%f", &raio);
    volume = (((4*pi*(pow(raio,3))/3)));
    return volume;
}
int main(){
    
    printf("%0.2f\n", volume_esfera());
    
    return 0;
}