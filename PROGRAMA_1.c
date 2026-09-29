#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Prototipo de función
void MENU(void);

int main()
{
    char op[3];
    double a, b, j;
    do
    {
               printf("\033[H\033[2J"); 
        MENU();
        printf("\033[1;37m");
        printf("\n\t\033[34mSelecciona una opcion: \033[34m");
        printf("\033[0m");
        scanf("%s", op);
        if (op[0] == 'o' && op[1] == 'p' && op[2] == '\0')
        {
            printf("\033[1;32m");
            printf("\n\t\033[34mRegresando al menu...'033[34m\n");
            printf("\033[0m");
            continue;
        }
        if (op[0] == '0' && op[1] == '\0')
        {
            printf("\033[1;31m");
            printf("\n\t\033[34mSaliendo de la calculadora...\033[34m\n");
            printf("\033[0m");
            break;
        }
        switch (op[0])
        {

    case '1':

    printf("\033[H\033[2J");

    printf("\n\n");
    //Ctrl + Shift + U → 2588 → Enter█
    //═ → Ctrl + Shift + U, escribe 2550, Enter.═
    //╝ → Ctrl + Shift + U, escribe 255D, Enter.╝
    // Inicio del cuadro exterior (Color Blanco Brillante/Gris)
    printf("\033[1;37m");
    printf("\t\t\t╔══════════════════════════════════════════════════╗\n");
    printf("\033[1;36m"); 
    printf("\t\t\t║   ███████╗██╗   ██╗███╗   ███╗ █████╗            ║\n");
    printf("\t\t\t║   ██╔════╝██║   ██║████╗ ████║██╔══██╗           ║\n");
    printf("\t\t\t║   ███████╗██║   ██║██╔████╔██║███████║           ║\n");
    printf("\t\t\t║   ╚════██║██║   ██║██║╚██╔╝██║██╔══██║           ║\n");
    printf("\t\t\t║   ███████║╚██████╔╝██║ ╚═╝ ██║██║  ██║           ║\n");
    printf("\t\t\t║   ╚══════╝ ╚═════╝ ╚═╝     ╚═╝╚═╝  ╚═╝           ║\n");
    printf("\033[1;37m");
    printf("\t\t\t╠══════════════════════════════════════════════════╣\n");
    printf("\033[1;33m"); 
    printf("\t\t\t║   primer numero 1: ");
    scanf("%lf", &a);
    printf("\t\t\t║   segundo numero 2: ");
    scanf("%lf", &b);
    j = a + b;
    printf("\033[1;37m");
    printf("\t\t\t╠══════════════════════════════════════════════════╣\n");
    printf("\033[1;35m"); 
    printf("\t\t\t║   Resultado: %.2lf + %.2lf = %.2lf", a, b, j);
    printf("\033[1;37m"); 
    printf("\n\t\t\t╚══════════════════════════════════════════════════╝\n\n");
    printf("\033[0m"); 
    break;
           case '2':
                printf("\033[H\033[2J"); 
                printf("\033[1;37m");
                printf("\t\t\t╔══════════════════════════════════════════════════╗\n");
                printf("\033[1;36m"); 
                printf("\t\t\t║   ██████╗ ███████╗███████╗████████╗ █████╗       ║\n");
                printf("\t\t\t║   ██╔══██╗██╔════╝██╔════╝╚══██╔══╝██╔══██╗      ║\n");
                printf("\t\t\t║   ██████╔╝█████╗  ███████╗   ██║   ███████║      ║\n");
                printf("\t\t\t║   ██╔══██╗██╔══╝  ╚════██║   ██║   ██╔══██║      ║\n");
                printf("\t\t\t║   ██║  ██║███████╗███████║   ██║   ██║  ██║      ║\n");
                printf("\t\t\t║   ╚═╝  ╚═╝╚══════╝╚══════╝   ╚═╝   ╚═╝  ╚═╝      ║\n");
                printf("\033[1;37m");
                printf("\t\t\t╠══════════════════════════════════════════════════╣\n");
                printf("\033[1;33m"); 
                printf("\t\t\t║   PRIMER NUMERO: ");
                scanf("%lf", &a);
                printf("\t\t\t║   SEGUNDO NUMERO: ");
                scanf("%lf", &b);
                j = a - b;
                printf("\033[1;37m");
                printf("\t\t\t╠══════════════════════════════════════════════════╣\n");
                printf("\033[1;35m"); 
                printf("\t\t\t║   Resultado: %.2lf - %.2lf = %.2lf", a, b, j);
                printf("\033[1;37m"); 
                printf("\n\t\t\t╚══════════════════════════════════════════════════╝\n\n");
                printf("\033[0m"); 
                break;

            case '3':

                printf("\033[H\033[2J");
                printf("\033[1;37m");
                printf("\t\t\t╔══════════════════════════════════════════════════╗\n");
                printf("\033[1;36m"); 
                printf("\t\t\t║   ███╗   ███╗██╗   ██╗██╗  ████████╗██╗          ║\n");
                printf("\t\t\t║   ████╗ ████║██║   ██║██║  ╚══██╔══╝██║          ║\n");
                printf("\t\t\t║   ██╔████╔██║██║   ██║██║     ██║   ██║          ║\n");
                printf("\t\t\t║   ██║╚██╔╝██║██║   ██║██║     ██║   ██║          ║\n");
                printf("\t\t\t║   ██║ ╚═╝ ██║╚██████╔╝███████╗██║   ██║          ║\n");
                printf("\t\t\t║   ╚═╝     ╚═╝ ╚═════╝ ╚══════╝╚═╝   ╚═╝          ║\n");
                printf("\033[1;37m");
                printf("\t\t\t╠══════════════════════════════════════════════════╣\n");
                printf("\033[1;33m"); 
                printf("\t\t\t║   PRIMER NUMERO: ");
                scanf("%lf", &a);
                printf("\t\t\t║   SEGUNDO NUMERO: ");
                scanf("%lf", &b);
                j = a * b;
                printf("\033[1;37m");
                printf("\t\t\t╠══════════════════════════════════════════════════╣\n");
                printf("\033[1;35m"); 
                printf("\t\t\t║   Resultado: %.2lf x %.2lf = %.2lf", a, b, j);
                printf("\033[1;37m"); 
                printf("\n\t\t\t╚══════════════════════════════════════════════════╝\n\n");
                printf("\033[0m"); 
                break;


            case '4':

               printf("\033[H\033[2J");
               printf("\033[1;37m");
               printf("\t\t\t╔══════════════════════════════════════════════════╗\n");
               printf("\033[1;36m"); 
               printf("\t\t\t║   ██████╗  ██╗ ██╗   ██╗ ██╗  ███████╗ ██╗       ║\n");
               printf("\t\t\t║   ██╔═══██╗ ██║ ██║   ██║ ██║  ██╔════╝ ██║      ║\n");
               printf("\t\t\t║   ██║   ██║ ██║ ██║   ██║ ██║  ███████╗ ██║      ║\n");
               printf("\t\t\t║   ██║   ██║ ██║ ╚██╗ ██╔╝ ██║  ╚════██║ ██║      ║\n");
               printf("\t\t\t║   ██████╔╝  ██║  ╚████╔╝  ██║  ███████║ ██║      ║\n");
               printf("\t\t\t║   ╚═════╝   ╚═╝   ╚═══╝   ╚═╝  ╚══════╝ ╚═╝      ║\n");
               printf("\033[1;37m");
               printf("\t\t\t╠══════════════════════════════════════════════════╣\n");
               printf("\033[1;33m"); 
               printf("\t\t\t║   PRIMER NUMERO: ");
               scanf("%lf", &a);
               printf("\t\t\t║   SEGUNDO NUMERO: ");
               scanf("%lf", &b);
               printf("\033[1;37m");
               printf("\t\t\t╠══════════════════════════════════════════════════╣\n");

               if (b == 0)
{
                   printf("\033[1;31m"); 
                   printf("\t\t\t║   Error: No se puede dividir entre cero.         ");
}
             else
{
                  j = a / b;
                  printf("\033[1;35m"); 
                  printf("\t\t\t║   Resultado: %.2lf / %.2lf = %.2lf", a, b, j);
}
                  printf("\033[1;37m"); 
                  printf("\n\t\t\t╚══════════════════════════════════════════════════╝\n\n");
                  printf("\033[0m"); 
                  break;

                break;


            case '5':
                  printf("\033[H\033[2J");
                  printf("\033[1;37m");
                  printf("\t\t╔══════════════════════════════════════════════════════════╗\n");
                  printf("\033[1;35m"); 
                  printf("\t\t║  ██████╗  ██████╗ ████████╗███████╗███╗   ██╗            ║\n");
                  printf("\t\t║  ██╔══██╗██╔═══██╗╚══██╔══╝██╔════╝████╗  ██║            ║\n");
                  printf("\t\t║  ██████╔╝██║   ██║   ██║   █████╗  ██╔██╗ ██║            ║\n");
                  printf("\t\t║  ██╔═══╝ ██║   ██║   ██║   ██╔══╝  ██║╚██╗██║            ║\n");
                  printf("\t\t║  ██║     ╚██████╔╝   ██║   ███████╗██║ ╚████║            ║\n");
                  printf("\t\t║  ╚═╝      ╚═════╝    ╚═╝   ╚══════╝╚═╝  ╚═══╝            ║\n");
                  printf("\033[1;37m");
                  printf("\t\t╠══════════════════════════════════════════════════════════╣\n");
                  printf("\033[1;33m"); 
                  printf("\t\t║   PRIMER NUMERO: ");
                  scanf("%lf", &a);
                  printf("\t\t║   NUMERO ELEVADO: ");
                  scanf("%lf", &b);
                  j = pow(a, b);
                  printf("\033[1;37m");
                  printf("\t\t╠══════════════════════════════════════════════════════════╣\n");
                  printf("\033[1;36m"); 
                  printf("\t\t║   Resultado: %.2lf ^ %.2lf = %.2lf", a, b, j);
                  printf("\033[1;37m"); 
                  printf("\n\t\t╚══════════════════════════════════════════════════════════╝\n\n");
                  printf("\033[0m"); 
                  break;



            case '6':
                   printf("\033[H\033[2J");
                   printf("\033[1;37m");
                   printf("\t\t\t╔══════════════════════════════════════════════════╗\n");
                   printf("\033[1;34m"); 
                   printf("\t\t\t║   ██████╗  █████╗ ██╗███████╗                    ║\n");
                   printf("\t\t\t║   ██╔══██╗██╔══██╗██║╚══███╔╝                    ║\n");
                   printf("\t\t\t║   ██████╔╝███████║██║  ███╔╝                     ║\n");
                   printf("\t\t\t║   ██╔══██╗██╔══██║██║ ███╔╝                      ║\n");
                   printf("\t\t\t║   ██║  ██║██║  ██║██║███████╗                    ║\n");
                   printf("\t\t\t║   ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚══════╝                    ║\n");
                   printf("\033[1;37m");
                   printf("\t\t\t╠══════════════════════════════════════════════════╣\n");
                   printf("\033[1;33m"); 
                   printf("\t\t\t║   Introduce el numero (radicando 'a'): ");
                   scanf("%lf", &a);
                   printf("\t\t\t║   Introduce el indice de la raiz ('b'): ");
                   scanf("%lf", &b); 
                   printf("\033[1;37m");
                   printf("\t\t\t╠══════════════════════════════════════════════════╣\n");
                   if (b == 0)
{
                     printf("\033[1;31m"); 
                     printf("\t\t\t║   Error: El indice 'b' no puede ser cero.        ");
}
                        else if (a < 0 && (int)b % 2 == 0)
{
                 printf("\033[1;31m"); 
                 printf("\t\t\t║   Error: Raiz par de un numero negativo.         ");
}
                else
{
                     j = pow(a, 1.0 / b);
                   printf("\033[1;35m"); 
                   printf("\t\t\t║   Resultado: La raiz %.2lf de %.2lf es: %.4lf", b, a, j);
}
              printf("\033[1;37m"); 
              printf("\n\t\t\t╚══════════════════════════════════════════════════╝\n\n");
              printf("\033[0m"); 
                   break;
default:
            printf("\033[H\033[2J");
            printf("\033[1;37m");
            printf("\t\t\t╔══════════════════════════════════════════════════╗\n");
            printf("\033[1;31m"); 
            printf("\t\t\t║  ERROR: OPCION NO VALIDA EN EL MENU              ║\n");
            printf("\033[1;37m");
            printf("\t\t\t╚══════════════════════════════════════════════════╝\n\n");
            printf("\033[0m");
            break;
    }

    printf("\033[1;37m");
    printf("\n\t\033[34mEscribe 'op' para regresar al menu.\033[34m");
    printf("\n\tEscribe '0' para salir.");
    
    printf("\033[1;31m");
    printf("\n\tPresiona ENTER para continuar...");
    printf("\033[0m");

    getchar();
    getchar();

} while (1);

    return EXIT_SUCCESS;
}


// Funcion del menu
void MENU(void)
{
    char *cian   = "\033[1;36m"; 
    char *texto  = "\033[32m";
    char *opcion = "\033[1;33m"; 
    char *reset  = "\033[0m";

    // Limpia la pantalla
    printf("\033[H\033[2J");

    // Bordes en cian, texto interior resaltado
    printf("%s", cian);
    printf("               +========================================+\n");
    printf("               |                                        |\n");
    printf("               |              %sCALCULADORA%s               |\n", texto, cian);
    printf("               |                %sBASICA%s                  |\n", texto, cian);
    printf("               |                                        |\n");
    printf("               +----------------------------------------+\n");
    printf("               |                                        |\n");
    printf("               |       %ssuma:================%s1%s           |\n", texto, opcion, cian);
    printf("               |       %sresta:===============%s2%s           |\n", texto, opcion, cian);
    printf("               |       %smulti:===============%s3%s           |\n", texto, opcion, cian);
    printf("               |       %sdivi:================%s4%s           |\n", texto, opcion, cian);
    printf("               |       %spotencia:============%s5%s           |\n", texto, opcion, cian);
    printf("               |       %sraiz:================%s6%s           |\n", texto, opcion, cian);
    printf("               |                                        |\n");
    printf("               |       %smenu principal:========%sop%s        |\n", texto, opcion, cian);
    printf("               |       %ssalir:===============%s0%s           |\n", texto, opcion, cian);
    printf("               |                                        |\n");
    printf("               +========================================+\n");

    printf("%s", reset);
    
}
