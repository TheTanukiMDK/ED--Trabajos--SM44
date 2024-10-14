#include <stdio.h>;

#define NUM_ALIMENTOS 4

int main(){

    char *alimentos[NUM_ALIMENTOS] = {"Hamburgesa", "Pizza", "Tacos", "Refresco"};
    float precios[NUM_ALIMENTOS] = {50.00, 80.00, 25.00, 20};
    int cantidad[NUM_ALIMENTOS] = {0};
    int opcion;
    char continuar;

    printf("Bienvenido al restaurante de consola \n");
    printf("Menu: \n");

    for (size_t i = 0; i < NUM_ALIMENTOS; i++)
    {
        /* code */
        printf("%d) - %s - %.2f\n", i + 1, alimentos[i], precios[i]);
    }
    
    printf("5)Salir");

    do
    {
        printf("Selecciona una opcion");
        scanf("%d", &opcion);
        if (opcion >= 1 && opcion < 5)
        {
            printf("Ingresa la cantidad de: %s" );
            printf("Deseas ordenar algo mas (s/n)");
            scanf(" %c", &continuar);
        }
        if(opcion == 5){
            printf("Has salido");
            break;
        }
        
    } while (continuar == 's' || continuar == 'S');
    
    return 0;
}