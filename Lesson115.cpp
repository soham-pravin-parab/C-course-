

#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()

{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    
    stack<int>s2;
    s2.swap(s);
    std::cout<<"s size :"<<s.size()<<'\n';
    std::cout<<"s2 size :"<<s2.size()<<'\n';


    return 0;
}