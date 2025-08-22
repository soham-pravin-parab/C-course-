
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
   std::vector <int> vec ={1,2,3,4,5};
    std::cout<<*(std::max_element (vec.begin(),vec.end()));

    return 0;
}