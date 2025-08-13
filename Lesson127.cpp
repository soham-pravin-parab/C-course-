
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    multimap<string , int>m;
    
    m.emplace("tv",100);
    m.emplace("laptop ",100);
    m.emplace("camera",25);
    for(auto p:m){
    
    std::cout<<p.first<<" "<<p.second<<'\n';
}
    return 0;
}