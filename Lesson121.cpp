
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
    m.insert({"camera",25});
    for(auto p:m){
    
    std::cout<<p.first<<" "<<p.second<<'\n';
}
    return 0;
}