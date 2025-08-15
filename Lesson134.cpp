
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int>s;
    s.insert(1); 
    s.insert(2); 
    s.insert(3); 
    s.insert(4); 
    s.insert(5); 
    
    s.insert(1);
    s.insert(2);
    s.insert(3); 
   std::cout<< "Lower bound = "<<*(s.lower_bound(4))<<'\n';
   std::cout<<"upper bound = "<<*(s.upper_bound(4))<<'\n';
 
    for(auto val:s){
        
    
    std::cout<<val<<" ";}

    return 0;
}