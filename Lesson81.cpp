#include <iostream>
#include <vector>
int main()
{
   std::vector<int> vec;
   
   vec.push_back(1);
   vec.push_back(2);
   vec.push_back(3);
   vec.push_back(4);
  
  for(int val:vec){
      std::cout<<val<<" ";
  }
  
  std::cout<<"value at index 2 "<<vec[2]<<"or"<<vec.at(2)<<'\n';
 
   return 0;
}
