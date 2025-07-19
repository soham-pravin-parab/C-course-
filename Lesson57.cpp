
#include <iostream>

int main()
{
    const int Size=100;
   std::string foods[Size];
   
   fill(foods,foods+(Size/2),"pizza");
   fill(foods+(Size/2),foods+Size,"burger");
   for(std::string food:foods){
    std::cout<<food<<'\n';
   }
    return 0;
}