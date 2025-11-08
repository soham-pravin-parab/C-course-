
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    std::cout<<*arr<<endl;
    std::cout<<*(arr+1)<<endl;
    std::cout<<*(arr+2)<<endl;
    std::cout<<*(arr+3)<<endl;

    return 0;
}