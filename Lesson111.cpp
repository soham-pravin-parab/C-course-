
#include <iostream>
#include <vector> 
using namespace std;

int main()
{
    vector<pair<int ,int>>vec ={{1,2},{2,3}, {3,4}};
    
    for(auto p:vec){
        std::cout<<p.first<<" "<<p.second<<'\n';
    }

    return 0;
}