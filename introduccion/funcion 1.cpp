//
//  main.cpp
//  funcion
//
//  Created by reyes rivera on 03/03/21.
//

#include <iostream>


void multiplicacion(int a,int b);


int main()
{
    int a,b;
    std::cout <<"Introduce el valor del primer numero a multiplicar:  ";
    std::cin>>a;
    std::cout <<"Introduce el valor del segundo numero a multiplicar:   ";
    std::cin>>b;
    multiplicacion(a,b);
    return 0;
}
void multiplicacion(int a,int b)
{
    int c=a*b;
    std::cout<<"El resultado de la multiplicacion es    "<<c;
}
