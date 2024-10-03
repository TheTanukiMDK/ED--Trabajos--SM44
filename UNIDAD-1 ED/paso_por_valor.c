#include <stdio.h>;

void swap(int firstVariable, int secondVariable)
{
    int tempVariable;

    tempVariable = firstVariable;
    firstVariable = secondVariable;
    secondVariable = tempVariable;

    printf("valor de a: %d \n", firstVariable);
    printf("valor de b: %d \n", secondVariable);
}

int main(void)
{
    int a = 100;
    int b = 200;

    printf("before swap: value of a: %d \n", a);
    printf("before swap: value of b: %d \n", b);

    swap(a, b);

    printf("after swap: value of a: %d \n", a);
    printf("after swap: value of b: %d \n", b);

    return 0;
}