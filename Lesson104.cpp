
#include <iostream>
#include  <vector>
#include  <deque>
using namespace std;

int main()
{
    deque<int>d={1,2,3};
    
    d.pop_back();
    d.pop_front();
    
    for(int val:d){
        std::cout<<val<<" ";
    }
    

    return 0;
}