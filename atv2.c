#include <stdio.h>

int main()
{
    int i, produtos[10], total;
    float precos[10], lucro;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &produtos[i]);
    }

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &precos[i]);

    }

    for (i = 0; i < 10; i++)
    {
        total += produtos[i];
        lucro += produtos[i] * precos[i];
    }
    
    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", lucro, total);
    ;

    return 0;
}