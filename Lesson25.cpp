
#include <iostream>

int main()
{
    std::string name ;
    std::cout<<"What is your name ";
    std::getline(std::cin,name);
    
    if(name.length()>12){
        std::cout<<"Your name cannot be more than 12 characters ";
    }
    else{
        std::cout <<"Welcome "<<name;
    }
    return 0;
}