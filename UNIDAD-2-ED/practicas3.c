#include <stdio.h>;
#include <stdlib.h>;
#include <string.h>;

int main(){
    int cantidadNombres;
    printf("Ingrese los nombres");
    scanf("%d", &cantidadNombres);
    getchar();

    char **nombres = (char **)malloc(cantidadNombres * sizeof(char *));

    for (size_t i = 0; i < cantidadNombres; i++)
    {
        /* code */
        char bufferNombrePersona[50];
        printf("Ingrese el nombre de la persona %d \n", i+1);
        fgets(bufferNombrePersona, sizeof(bufferNombrePersona), stdin);

        bufferNombrePersona[strcspn(bufferNombrePersona, "\n")] = '\0';

        nombres[i] = malloc(strlen(bufferNombrePersona) * sizeof(char));
        strcpy(nombres[i], bufferNombrePersona);
    }

    for (size_t i = 0; i < cantidadNombres; i++)
    {
        /* code */
        printf("El nombre de la persona %d es: %s \n", i+1, nombres[i]);
    }
    
    
}