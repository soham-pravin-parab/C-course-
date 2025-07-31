#include <iostream>
#include <vector>
int main()
{
   std::vector<int> vec={ 1,2,3,4,5 };
   vec.clear();
   
   
  for(int val:vec){
      std::cout<<val<<" ";
  }
  std::cout<<'\n';
  std::cout<<"is empty: "<<vec.empty()<<'\n';
  
  
  
 
   return 0;
}
