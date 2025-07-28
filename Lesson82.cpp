#include <iostream>
#include <vector>
int main()
{
   std::vector<int> vec;
   
   vec.push_back(1);
   vec.push_back(2);
   vec.push_back(3);
   
   vec.pop_back();
   
   std::cout << vec.size() << std::endl;
   std::cout << vec.capacity() << '\n';

   return 0;
}
