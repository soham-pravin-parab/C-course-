
#include <iostream>
#include  <vector>
#include  <list>
using namespace std;

int main()
{
    list<int>l={1,2,3};
    
    l.pop_back();
    l.pop_front();
    
    for(int val:l){
        std::cout<<val<<" ";
    }
    

    return 0;
}