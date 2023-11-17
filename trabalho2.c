#include <stdio.h>
int main()
{
    int casos = 0, i, i2, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, a2 = 0, b2 = 0, c2 = 0, d2 = 0, e2 = 0, f2 = 0;
    char dnaa[12], dnab[12];
    scanf("%d", &casos);
    for(i=0; i < casos; i++)
   
    {
        scanf("%s", dnaa);
        scanf("%s", dnab);
        for(i2=0; i2 < 12; i2++)
        {
            switch (dnaa[i2])
            {
                case 'A':
                    a = a + 1;
                    break;
                case 'B':
                    b = b + 1;
                    break;
                case 'C':
                    c = c + 1;
                    break;
                case 'D':
                    d = d + 1;
                    break;
                case 'E':
                    e = e + 1;
                    break;
                case 'F':
                    f = f + 1;
                    break;
                default:
                    break;
            }
            switch (dnab[i2])
            {
                case 'A':
                    a2 = a2 + 1;
                    break;
                case 'B':
                    b2 = b2 + 1;
                    break;
                case 'C':
                    c2 = c2 + 1;
                    break;
                case 'D':
                    d2 = d2 + 1;
                    break;
                case 'E':
                    e2 = e2 + 1;
                    break;
                case 'F':
                    f2 = f2 + 1;
                    break;
                default:
                    break;
            }

        }
         if ( a == a2 && b == b2 && c == c2 && d == d2 && e == e2 && f == f2)
        {
            printf("Caracteristicas Iguais\n");
        }
        else
        {
            printf("Caracteristicas Diferentes\n");
        }
        a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, a2 = 0, b2 = 0, c2 = 0, d2 = 0, e2 = 0, f2 = 0;
            
    }
    return 0;
}