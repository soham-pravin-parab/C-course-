
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    
    int* ptr2;
    int* ptr1=ptr2;
    std::cout<<ptr1<<endl;
    std::cout<<ptr2<<endl;
    
    std::cout<<(ptr1==ptr2)<<endl;
    
    return 0;
}