#include <stdio.h>

//Definicion de la funcion duplicar
int duplicar(int num){ //la funcion espera un parametro
    return num * 2; 
}

int main(){
    int resultado = duplicar(4); //se llama la funcion y se le da un parametro  
        printf(" el resultado es %d\n", resultado); //imprimir el resultado
        return 0;
}

