
#include <iostream>
#include  <vector>
#include  <list>
using namespace std;

int main()
{
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(5);
    
    
    for(int val:l){
        std::cout<<val<<" ";
    }
    

    return 0;
}