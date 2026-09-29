#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592653589793

int main()
{
    int x;
    double rad;

    for (x = -360; x <= 360; x++)
    {
        rad = x * PI / 180.0;

        printf("%d %lf %lf\n",
               x,
               sin(rad),
               cos(rad));
    }

    return 0;
}

/*
COMO EJECUTAR:

gcc funciones.c -o funciones -lm

gnuplot -p -e "plot '< ./seno' using 1:2 with lines title 'Seno(x)', '< ./seno' using 1:3 with lines title 'Coseno(x)'"
*/
