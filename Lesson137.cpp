
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   vector <int> vec={1,3,2,5,8};
    
   std::sort(vec.begin(),vec.end());
    for(int val:vec){
    std::cout<<val<<" ";
}
    return 0;
}