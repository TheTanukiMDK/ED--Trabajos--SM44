#include <stdio.h>;
#include <stdlib.h>;
#include <string.h>;

#define NUM_ALIMENTOS 4

char **solicitarEspacioMemoria(int cantidadAlimentos)
{
    char **nombreAlimentos = (char **)malloc(cantidadAlimentos * sizeof(char *)); // puntero de punteros a cadena/caracteres

    return nombreAlimentos;
}

int main()
{

    // char *alimentos[NUM_ALIMENTOS] = {"Hamburgesa", "Pizza", "Tacos", "Refresco"};
    float precios[NUM_ALIMENTOS] = {50.00, 80.00, 25.00, 20};
    int cantidad[NUM_ALIMENTOS] = {0};
    int opcion;
    int cantidad_ingresada;
    char continuar;
    float total;

    int alimentosIngresar;

    printf("Bienvenido al restaurante de consola \n");
    printf("Ingresa la cantidad de alimentos a pedir \n");
    scanf("%d", &alimentosIngresar);
    getchar();

    char **nombreAlimentos = solicitarEspacioMemoria(alimentosIngresar);

    for (size_t i = 0; i < alimentosIngresar; i++)
    {
        /* code */
        char bufferNombreAlimento[50];
        printf("Ingresa el nombre del alimento %d\n", i + 1);
        fgets(bufferNombreAlimento, sizeof(bufferNombreAlimento), stdin);

        bufferNombreAlimento[strcspn(bufferNombreAlimento, "\n")] = '\0';
        nombreAlimentos[i] = malloc(strlen(bufferNombreAlimento) * sizeof(char));

        strcpy(nombreAlimentos[i], bufferNombreAlimento);
        printf("El  nombre del alimento es registrado: %s \n", bufferNombreAlimento);

    }

    printf("Menu: \n");

    for (size_t i = 0; i < NUM_ALIMENTOS; i++)
    {
        /* code */
        printf("%d) - %s - %.2f\n", i + 1, nombreAlimentos[i], precios[i]);
    }

    printf("5) - Salir\n");

    do
    {
        printf("Selecciona una opcion \n");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion < 5)
        {
            printf("Ingresa la cantidad de: %s\n", nombreAlimentos[opcion - 1]);
            scanf("%d", &cantidad_ingresada);

            total += cantidad_ingresada * precios[opcion - 1];
            cantidad[opcion - 1] += cantidad_ingresada; // almacenar cantidad

            printf("Deseas ordenar algo mas (s/n)");
            scanf(" %c", &continuar);
        }
        if (opcion == 5)
        {
            printf("Has salido");
            break;
        }

    } while (continuar == 's' || continuar == 'S');

    printf("\nResumen de tu pedido:\n");
    for (int i = 0; i < NUM_ALIMENTOS; i++)
    {
        if (cantidad[i] > 0)
        {
            printf("%s - $%.2f x %d = $%.2f\n", nombreAlimentos[i], precios[i], cantidad[i], cantidad[i] * precios[i]);
        }
    }

    printf("El total de tu compra es de $%.2f\n", total);
    return 0;
}