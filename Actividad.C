#include <stdio.h>

#define Tc_Dolar_GTQ 7.79  // Tipo de cambio: 1 USD = 7.75 GTQ
#define Tc_Euro_GTQ  8.44  // Tipo de cambio: 1 EUR = 8.44 GTQ

int main() {
    int opcion;
    float cantidad;

    printf("Bienvenido al conversor de moneda\n");
    printf("1. Convertir de Dolares a Quetzales\n");
    printf("2. Convertir de Quetzales a Dolares\n");
    printf("3. Convertir de Euros a Quetzales\n");
    printf("4. Convertir de Quetzales a Euros\n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("Ingrese la cantidad en Dolares: ");
            scanf("%f", &cantidad);
            printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * Tc_Dolar_GTQ);
            break;
        case 2: 
            printf("Ingrese la cantidad en Quetzales; ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad / Tc_Dolar_GTQ);
            break;
        case 3:
            printf("Ingrese la cantidad en Euros: ");
            scanf("%f", &cantidad);
            printf("%.2f EUR equivale a %.2f GTQ\n", cantidad, cantidad * Tc_Euro_GTQ);
            break;
        case 4:
            printf("Ingrese la cantidad en Quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f EUR\n", cantidad, cantidad / Tc_Euro_GTQ);
            break;
        default:
            printf("Opcion no valida\n");
    }

    return 0;
}