
#include <iostream>
using namespace std;

void ChangeA(int* ptr){
    *ptr =20;
}
int main()
{
    int a= 10;
    ChangeA(&a);
    std::cout<<"inside main fxn : "<<a<<endl;

    return 0;
}