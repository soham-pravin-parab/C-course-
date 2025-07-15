
#include <iostream>
double square(double length);

int main()
{
    std::cout<<"Enter length \n";
    
    double length;
    
    std::cin>>length;
    
    double area = square(length);
    
    std::cout << "Area:"<<area<<"cm^2"<< std::endl;

    return 0;
}

double square (double length){
    return length*length;
}