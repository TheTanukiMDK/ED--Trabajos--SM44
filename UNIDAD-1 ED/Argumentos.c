#include <stdio.h>

//Declarar la funcion, esta recibe 2 argumentos num 1 y num 2
int multiplicar(int num1, int num2){
    return num1 * num2; //devolver lo que hara la funcion
}

int main(){
    //llamar la funcion pasando los argumentos que espera la funcion en este caso 2 numeros para multiplicar
    int resultado = multiplicar(2,3);
    printf("El resultado es %d\n", resultado); //imprimir el resultado
    return 0;
}
