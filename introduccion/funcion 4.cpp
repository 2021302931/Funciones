//
//  main.cpp
//  funcion 4
//
//  Created by reyes rivera on 03/03/21.
//

#include <iostream>
using namespace::std;

int factorial(int a);
int main()
{
    int n1;
    cout << "Introduce el valor del numero:  ";
    cin >>n1;
    int fact=factorial(n1);
    cout <<"El"<<n1<<"es"<<fact;
    
    return 0;
}
int factorial(int a)
{
    int i;
    int resultado= 1;
    for(i=1; i<=a; i++){
        resultado *=i;
        
    }
    return resultado;
}
