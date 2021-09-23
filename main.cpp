#include <iostream>

int readNumber()
{
  std::cout <<"ingrese un entero: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
int x{readNumber()};
int y{readNumber()};

std::cout<<"la sumas de sus numeros enteros es: " << x + y <<"\n";
return 0;
}

