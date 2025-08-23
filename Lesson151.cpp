
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
   std::vector <int> vec ={1,2,3,4,5};
    std::cout<<binary_search(vec.begin(),vec.end(),5);

    return 0;
}