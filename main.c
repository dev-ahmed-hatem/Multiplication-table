#include <stdio.h>
#include <stdlib.h>
int main ()
{
    for (int rows=1;rows<=12;++rows)
    {
     for (int coloms=1;coloms<=12;++coloms)
     {
         printf("%d*%2d=%3d   ",coloms,rows,rows*coloms);
     }
     printf("\n");
    }
}
