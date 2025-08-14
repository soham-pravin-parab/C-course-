
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string , int>m;
    
    m.emplace("tv",100);
    m.emplace("laptop",500);
    m.emplace("tab",100);
    m.emplace ("watch",100);
    
    
    for(auto p:m){
    
    std::cout<<p.first<<" "<<p.second<<'\n';
}
    
    return 0;
}