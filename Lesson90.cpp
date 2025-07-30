#include <iostream>
#include <vector>
int main()
{
   std::vector<int> vec={ 1,2,3,4,5 };
   vec.insert(vec.begin()+2,100);
   
   
  for(int val:vec){
      std::cout<<val<<" ";
  }
  
 
   return 0;
}
