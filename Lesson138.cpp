
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   vector<pair<int ,int>> vec={{1,3},{2,5},{8,1}};
    
   std::sort(vec.begin(),vec.end());
    for(auto p:vec){
    std::cout<<p.first<<" "<<p.second<<'\n';
}
    return 0;
}