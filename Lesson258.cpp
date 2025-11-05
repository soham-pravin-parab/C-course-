
#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int* ptr = &a;
    int** Parptr=&ptr;
    std::cout<<*(Parptr)<<endl;
    cout<<ptr<<endl;

    return 0;
}