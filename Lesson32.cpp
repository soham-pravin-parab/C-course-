

#include <iostream>

int main()
{
    std::string name;
    
    while(name.empty()){
        std::cout<<"Enter your name";
        std::getline(std::cin,name);
    }
    
    std::cout<<"Welcome "<<name;

    return 0;
}