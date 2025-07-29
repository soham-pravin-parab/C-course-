#include <iostream>
#include <vector>
int main()
{
   std::vector<int> vec(3,10);
   
   
  for(int val:vec){
      std::cout<<val<<" ";
  }
  
 
   return 0;
}
