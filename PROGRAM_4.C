#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double sueldo = 4800.0;
    int años;
    
    double total8 = sueldo * 12 * pow(1.04, 8);

    printf("Ingrese los años que desea calcular: ");
    scanf("%d", &años);

    double total = sueldo * 12 * pow(1.04, años);

    printf("\nTotal en 8 años: %.2f pesos\n", total8);
    printf("Total en %d años: %.2f pesos\n", años, total);

    return EXIT_SUCCESS;
}
