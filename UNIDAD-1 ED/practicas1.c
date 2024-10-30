#include <stdio.h>

int recibirEdad(int edad)
{
    edad = 0;
}

int main()
{
    int edad = recibirEdad(edad);
    printf("ingresa tu edad");
    scanf("%d", &edad);


    if (edad >= 18)
    {
        edad = edad - 18;
        printf("Eres mayor, cumplistes hace %d\n", edad);
    }
    else
    {
        edad = edad - 18;
        printf("Eres menor, te faltan %d\n", edad);
    }
    return 0;
}