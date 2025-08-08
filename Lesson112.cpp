
#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    vector<pair<int ,int>>vec ={{1,2},{2,3}, {3,4}};
    vec.emplace_back (4,5);
    
    for(pair <int ,int>p:vec){
        std::cout<<p.first<<" "<<p.second<<'\n';
    }

    return 0;
}