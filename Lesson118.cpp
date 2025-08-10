

#include <iostream>
#include <vector>
#include <queue> 
using namespace std;
int main()

{
   priority_queue<int>q;
    q.push(10);
    q.push(15);
    q.push(5);
    
    while(!q.empty()){
        
    
    std::cout<<q.top()<<" ";
    q.pop();
}
    return 0;
}