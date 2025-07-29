#include <iostream>
#include <vector>
int main()
{
   std::vector<int> vec1={ 1,2,3,4,5 };
   std::vector<int> vec2(vec1);
   
  for(int val:vec2){
      std::cout<<val<<" ";
  }
  
 
   return 0;
}
