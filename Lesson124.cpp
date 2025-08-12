
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    map<string , int>m;
    
    m["tv"]=100;
    m["laptop "]=100;
    m["headphones "]=50;
    m.emplace("camera",25);
    for(auto p:m){
    
    std::cout<<p.first<<" "<<p.second<<'\n';
}
    std::cout<<"count="<<" "<<m["laptop "];
    return 0;
}