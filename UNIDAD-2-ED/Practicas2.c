#include <stdio.h>;

int main() {
    int edad1, edad2, edad3;
    char persona1[50], persona2[50], persona3[50]; //areglo para almacenar los nombres

    for (int i = 1; i <= 3; i++) {
        printf("Ingresa el nombre y la edad de la persona %d \n", i);
        printf("Nombre: ");
        scanf("%s", (i == 1) ? persona1 : (i == 2) ? persona2 : persona3);
        printf("Edad: ");
        if (i == 1) {
            scanf("%d", &edad1);
        } else if (i == 2) {
            scanf("%d", &edad2);
        } else {
            scanf("%d", &edad3);
        }
        getchar(); // Limpiar el buffer
    }

    // Determinar la persona mayor
    if (edad1 >= edad2 && edad1 >= edad3) {
        printf("\nPersona mayor: %s, Edad: %d\n", persona1, edad1);
    } else if (edad2 >= edad1 && edad2 >= edad3) {
        printf("\nPersona mayor: %s, Edad: %d\n", persona2, edad2);
    } else {
        printf("\nPersona mayor: %s, Edad: %d\n", persona3, edad3);
    }

    // Determinar la persona menor
    if (edad1 <= edad2 && edad1 <= edad3) {
        printf("Persona menor: %s, Edad: %d\n", persona1, edad1);
    } else if (edad2 <= edad1 && edad2 <= edad3) {
        printf("Persona menor: %s, Edad: %d\n", persona2, edad2);
    } else {
        printf("Persona menor: %s, Edad: %d\n", persona3, edad3);
    }

    return 0;
}
