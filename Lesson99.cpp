#include <iostream>
#include <vector>
int main()
{
   std::vector<int> vec={ 1,2,3,4,5 };
   
   
   
   for(auto it=vec.begin();it!=vec.end();it++){
       std::cout<<*(it)<<" ";
   }
   std::cout<<'\n'; 
 
   return 0;
}
