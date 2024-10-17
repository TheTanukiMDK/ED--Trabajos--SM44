#include <stdio.h>;

#define NUM_ALIMENTOS 4

int main(){

    char *alimentos[NUM_ALIMENTOS] = {"Hamburgesa", "Pizza", "Tacos", "Refresco"};
    float precios[NUM_ALIMENTOS] = {50.00, 80.00, 25.00, 20};
    int cantidad[NUM_ALIMENTOS] = {0};
    int opcion;
    int cantidad_ingresada;
    char continuar;
    float total;

    printf("Bienvenido al restaurante de consola \n");
    printf("Menu: \n");

    for (size_t i = 0; i < NUM_ALIMENTOS; i++)
    {
        /* code */
        printf("%d) - %s - %.2f\n", i + 1, alimentos[i], precios[i]);
    }
    
    printf("5) - Salir\n");

    do
    {
        printf("Selecciona una opcion \n");
        scanf("%d", &opcion);
        
        if (opcion >= 1 && opcion < 5)
        {
            printf("Ingresa la cantidad de: %s\n", alimentos[opcion - 1] );
            scanf("%d", &cantidad_ingresada);

            total += cantidad_ingresada * precios[opcion - 1]; 
            cantidad[opcion - 1] += cantidad_ingresada; //almacenar cantidad

            printf("Deseas ordenar algo mas (s/n)");
            scanf(" %c", &continuar);
        }
        if(opcion == 5){
            printf("Has salido");
            break;
        }
        
    } while (continuar == 's' || continuar == 'S');

    printf("\nResumen de tu pedido:\n");
    for (int i = 0; i < NUM_ALIMENTOS; i++) {
        if (cantidad[i] > 0) {
            printf("%s - $%.2f x %d = $%.2f\n", alimentos[i], precios[i], cantidad[i], cantidad[i] * precios[i]);
        }
    }

    printf("El total de tu compra es de $%.2f\n", total);
    return 0;
}