#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double sueldo_mensual = 4800.0;
    double sueldo_anual_inicial = sueldo_mensual * 12;
    int n_fijo = 8;
    double total_anual_fijo = sueldo_anual_inicial * pow(1.04, n_fijo);
    int años;
    printf("Ingrese a cuantos años quiere calcular: ");
    if (scanf("%d", &años) != 1) {
        printf("Error: Debe ingresar un numero entero.\n");
        return EXIT_FAILURE;
    }
    double total_anual_usuario = sueldo_anual_inicial * pow(1.04, años);
    printf("Total ganado en el año %d : %.2f pesos\n", años, total_anual_usuario);
    printf("Total ganado en el año %d : %.2f pesos\n", n_fijo, total_anual_fijo);
    
    return EXIT_SUCCESS;
}





