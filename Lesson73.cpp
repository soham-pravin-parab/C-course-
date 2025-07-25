
#include <iostream>
enum colours { red ,blue , orange ,white ,black};
int main()
{
    colours shirt = white;
    
    switch(shirt){
    case 0 : std::cout <<"It is the colour red"  << std::endl;
                  break;
    case 1 : std::cout <<"It is the colour blue"  << std::endl;
                  break;
    case 2 : std::cout <<"It is the colour orange"  << std::endl;
                  break;
    case 3 : std::cout <<"It is the colour white"  << std::endl;
                  break;
    case 4 : std::cout <<"It is the colour black"  << std::endl;
                  break;
    }


    return 0;
}