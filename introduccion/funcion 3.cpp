//
//  main.cpp
//  funcion 3
//
//  Created by reyes rivera on 03/03/21.
//

#include<iostream>


int max(int a, int b);
int main()
{
    int n1,n2,n3;
    std::cout<<"Digite tres numeros:  ";
    std::cin>>n1>>n2>>n3;
    int max1= max(n1,n2);
    int max2= max(max1,n3);
    std::cout<<"El mayor es:  "<<max2;
    
    
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

