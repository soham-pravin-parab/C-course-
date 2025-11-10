
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    
    int* ptr = arr;
    
    std::cout<<*(ptr+1)<<endl;
    std::cout<<*(ptr+3)<<endl;
    ptr++;
    std::cout<<*ptr<<endl;
    
    return 0;
}