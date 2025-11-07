
#include <iostream>
#include <vector>
using namespace std;
void changeA(int &b){
    b=20;
}
int main()
{
    int a =10;
    changeA(a);
    std::cout<<"inside main fxn:"<<a;

    return 0;
}