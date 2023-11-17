

#include <stdio.h>

int main()
{
    int l, c, h, j;
    scanf("%d %d", &h, &j );
    int matriz[h] [j];
    
    for (l=0; l < h  ; l++)
    {
        for (c=0; c < j ; c++)
         {
             scanf("%d",&matriz[l] [c]);
             
         }
    }
    
  for ( c=0; c < j ; c++ )
    {
     for ( l=0; l < h ; l++ )
       {
            printf ("%d ", matriz[ l ][ c ]);
        }
        printf("\n");
    }


return 0;  
    
    
}
