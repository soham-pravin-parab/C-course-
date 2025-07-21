
#include <iostream>

int main()
{
    std::string x="Kool-Aid";
    std::string y="water";
    std::string temp;
    
    temp=x;
    x=y;
    y=temp;
    
    std::cout << "X:" <<x<< std::endl;
    std::cout << "Y:" <<y<< std::endl;


    return 0;
}