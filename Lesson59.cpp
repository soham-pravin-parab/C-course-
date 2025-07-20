
#include <iostream>

int main()
{
    std::string cars [][3]={{"Mustang ","Escape", "F-150" },
                           {"Corvette", "Equinox","Silverado"},
                           {"Challenger","Durago","Ram 150"}};
                           
                           
    std::cout<<cars[1][0]<<"  ";

    return 0;
}