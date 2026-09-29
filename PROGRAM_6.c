#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int n, i, j;
    char palabras[100][50];
    char aux[50];

    printf("¿Cuantas palabras desea ingresar?: ");
    scanf("%d", &n);

    getchar(); // Limpiar el salto de línea

    // Entrada de palabras
    for(i = 0; i < n; i++)
    {
        printf("Palabra %d: ", i + 1);
        fgets(palabras[i], 50, stdin);

        // Eliminar salto de línea
        palabras[i][strcspn(palabras[i], "\n")] = '\0';
    }

    // Algoritmo de burbuja
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(strcmp(palabras[j], palabras[j + 1]) > 0)
            {
                strcpy(aux, palabras[j]);
                strcpy(palabras[j], palabras[j + 1]);
                strcpy(palabras[j + 1], aux);
            }
        }
    }

    // Mostrar resultado
    printf("\n ████████████LISTA DE PALABRAS████████\n");

    char letraActual = '\0';

    for(i = 0; i < n; i++)
    {
        if(palabras[i][0] != letraActual)
        {
            letraActual = palabras[i][0];

            printf("\nLetra %c:\n", letraActual);
        }

        printf("%s\n", palabras[i]);
    }

    return 0;
}
