#include <stdio.h>

int main()
{
    float notas[20];
    float pesquisa;
    int i, dif;

    for (i = 0; i < 20; i++)
    {
        scanf("%f", &notas[i]);
    }

    while (pesquisa >= 0)
    {
        scanf("%f", &pesquisa);
        dif = 0;
        for (i = 0; i < 20; i++)
        {
            if(pesquisa < 0)
            {
                break;
            }
            if (pesquisa == notas[i])
            {
                printf("existe\n");
                break;
            } 
            else 
            {
                dif++;
                if(dif == 20)
                {
                    printf("nao existe\n");
                }
            }       
        }
    }

    return 0;
}