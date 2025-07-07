
#include <iostream>

int main()
{
    int grade ;
    
    std::cout<<"What are your grades?"<<'\n';
    std::cin>>grade;
    
    grade>=60? std::cout<<"You pass !":std::cout<<"You fail ";

    return 0;
}