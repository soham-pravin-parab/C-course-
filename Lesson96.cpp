#include <iostream>
#include <vector>
int main()
{
   std::vector<int> vec={ 1,2,3,4,5 };
   
   std::vector<int>::reverse_iterator it ;
   
   for(it=vec.rbegin();it!=vec.rend();it++){
       std::cout<<*(it)<<" ";
   }
   std::cout<<'\n'; 
 
   return 0;
}
