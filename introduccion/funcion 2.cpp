//
//  main.cpp
//  funcion 2
//
//  Created by reyes rivera on 03/03/21.
//

#include<iostream>


int max(int a, int b);
int main()
{
    int n1,n2;
    std::cout<<"Digite dos numero:  ";
    std::cin>>n1>>n2;
    std::cout<<"el mayor de los numeros es:  "<<max(n1,n2);
    
    
    return 0;
}
int max(int a,int b)
{
    int mayor;
    if(a>b)
    {
        mayor=a;
    }
    else
    {
        mayor=b;
    
    }
    return mayor;
}
