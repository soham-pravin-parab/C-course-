
#include <iostream>

int main()
{
    char grade ;
    
    std::cout << "What letter grade";
    
    std::cin>>grade;
    
    switch(grade){
        case 'A':
         std::cout<<"You did great!";
        break;

        case 'B':
        std::cout<<"You did good!";
        break;
        
        case 'C':
        std::cout<<"You did ok";
        break;
        
        case 'F':
        std::cout<<"You FAILED";
        break;
        
        default:
        std::cout<<"please only enter the letter grade (A-F)";
        }
        
        
    return 0;
}