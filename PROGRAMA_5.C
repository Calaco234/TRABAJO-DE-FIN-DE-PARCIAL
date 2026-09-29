#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h> 
int main() { 
    int total_pares = 0; 
    int i;            
    char frase[100]; 
    char vocal1[100];
    char vocal2[100];
    int posicion1[100];
    int posicion2[100];
    printf("Ingrese la frase: "); 
    fgets(frase, sizeof(frase), stdin); 
    frase[strcspn(frase, "\n")] = '\0';
    printf("\n--- Buscando vocales juntas ---\n");
    for (i = 0; i < (int)strlen(frase) - 1; i++) { 
        char c1 = tolower(frase[i]);
        char c2 = tolower(frase[i+1]);
        if ((c1=='a' || c1=='e' || c1=='i' || c1=='o' || c1=='u') && 
            (c2=='a' || c2=='e' || c2=='i' || c2=='o' || c2=='u')) { 
            vocal1[total_pares] = frase[i];
            vocal2[total_pares] = frase[i+1];
            posicion1[total_pares] = i + 1;
            posicion2[total_pares] = i + 2;
            total_pares++;
        } 
    }
    if (total_pares > 0) {
        printf("\nResultado: VERDADERO\n");
    } else {
        printf("\nResultado: FALSO\n");
    }
    printf("Contador de vocales juntas: %d\n", total_pares);
    if (total_pares > 0) {
        printf("\n--- Vocales encontradas ---\n");
        for (i = 0; i < total_pares; i++) {
            printf("Vocal %d: '%c' posicion %d\n", 
                   i + 1, vocal1[i], posicion1[i]);
            printf("Vocal %d: '%c' posicion %d\n", 
                   i + 2, vocal2[i], posicion2[i]);
        }
    }
    return EXIT_SUCCESS; 
}
