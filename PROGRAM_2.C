#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int i;
    double f;
    double fact = 1, a;
    if (argc < 2)
    {
        printf("FALTA DE DATOS\n");
        return EXIT_FAILURE;
    }
    else
    {
        for (i = 1; i < argc; i++)
        {
            f = atof(argv[i]);
            printf("f=%.0f\n", f);
            if (f < 0)
            {
                printf("factorial no existe\n");
            }
            else
            {
                if (f == 0)
                {
                    printf("%.0lf=%.0f\n", f, fact);
                }
                else
                {
                    for (a = f; a >= 1; a--)
                    {
                        fact = fact * a;
                    }
                    printf("%.0lf=%.0f\n", f, fact);
                    fact = 1;
                }
            }
        }
    }
    return EXIT_SUCCESS;
}

