

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
    
    std::cout<<"top = "<<s.top();

    return 0;
}