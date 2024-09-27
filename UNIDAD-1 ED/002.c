#include <stdio.h> //funciones para ingresar y mostrar datos en pantalla

int edad = 0, edadLimite = 100, edadRestante = 0;

//firmas prinf y scanf
int main()
{
    printf("ingresa tu edad: ");
    scanf("%d", &edad);

    edadRestante = edadLimite - edad;

    if(edad >= 18){
        printf("Eres mayor de edad y tu edad es: %d y te quedan %d", edad, edadRestante);
    }else{
        printf("Eres menor de edad y tu edad es: %d y te quedan %d", edad, edadRestante);

    }

    return 0;
}

//especficadores
/*
%d numero entero
%D numero entero largo
%f numeros con punto flotante, menos preciso que double
%lf numero con punto flotante, pero con mas precision (double)
%c caracter
%s cadena de texto
*/



