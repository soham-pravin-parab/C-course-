
#include <iostream>
#include  <vector>
#include  <deque>
using namespace std;

int main()
{
    deque<int>d={1,2,3};
     
    for(int val:d){
        std::cout<<val<<" ";
    }
    std::cout<< d[2] <<'\n';


    return 0;
}