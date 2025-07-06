
#include <iostream>

#include <cmath>

int main()
{
    double A;
    double B;
    double C;
    
    std::cout<<"Enter side A"<<'\n';
    std::cin >>A;
    
    std::cout<<"Enter side B"<<'\n';
    std::cin >>B;
    
    C=sqrt(pow(A,2)+pow(B,2));
    
    std::cout<<"side C is "<<C;

    return 0;
}