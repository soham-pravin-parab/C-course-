
#include <iostream>
using namespace std;
int main()
{
    float price=10.58;
    float* ptr = &(price);
    std::cout<<ptr<<endl;
    cout<<&price<<endl;

    return 0;
}