
#include <iostream>

int main()
{
    int age ;
    
    std::cout<<"Enter your age ";
    
    std::cin>>age;
    
    if(age>=18)
    {  std::cout<<"Welcome to the site!" ; }
    
    else {std::cout<<"You are not allowed to enter the site !";}

    return 0;
}