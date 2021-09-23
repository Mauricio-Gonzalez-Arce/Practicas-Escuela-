#include <iostream>
#include "io.h"

int readNumber()
{
    std::cout << "Introduzca un numero entero: ";
    int x {};
    std::cin>>x;
    return x;
}

void writeAnswer(int x)
{
    std::cout<<"La suma de tus numeros enteros es: " << x;
}