#include <stdio.h>

//declarar la funcion de sumar
int sumar(int a, int b){ 
    return a + b;
}

//declarar la funcion para imprimir resultado
void mostrarResultado(int resultado){ //pasamos el parametro para mostrar el resultado
    printf("El resultado de la suma es %d\n", resultado);
}

int main(){
    int suma = sumar(4,6); //llamamos la funcion suma
    mostrarResultado(suma); //llamamos la funcion para imprimir el resultado
    return 0;
}