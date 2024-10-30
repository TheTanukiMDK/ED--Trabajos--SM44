#include <stdio.h>;

int main()
{
    int edad1, edad2, edad3;
    char persona1, persona2, persona3;
    printf("Ingresa el nombre y la edad de la persona 1 \n");
    printf("Nombre: ");
    scanf("%s", persona1);
   
    printf("Edad: ");
    scanf("%d", &edad1);
   
    printf("Ingresa la edad de la persona 2 \n");
    printf("Nombre: ");
    scanf("%s", persona2);
    
    printf("Edad: ");
    scanf("%d", &edad2);
   
    printf("Ingresa la edad de la persona 3 \n");
    printf("Nombre: ");
    scanf("%s", persona3);
   
    printf("Edad: ");
    scanf("%d", &edad3);
    

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