#include <stdio.h> //funciones para ingresar y mostrar datos en pantalla

int edad = 0;

//firmas prinf y scanf
int main()
{
    printf("ingresa tu edad: ");
    scanf("%d", &edad);

    if(edad >= 18){
        printf("eres mayor de edad");
    }else{
        printf("eres menor de edad");
    }

    return 0;
}


