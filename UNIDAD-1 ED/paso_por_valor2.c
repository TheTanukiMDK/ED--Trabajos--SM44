#include <stdio.h>;

int sumarEdad(int *edad){ //recibe la dirreccion
    *edad = *edad + 1;
    printf("La edad es %d \n", *edad);
}

int main(){
    int edad = 17;
    sumarEdad(&edad); //se guarda la dirreccion donde se guarda la variable
    printf("La edad es %d \n", edad);
    return 0;
}