
#include <iostream>
#include <string>
using namespace std ;
class A{
    public:
    int x;
    void incx(){
        x=x+1;
    }
};
int main()
{
    A obj;
    obj.x=0;
    std::cout<<obj.x<<endl;
    obj.incx();
    std::cout<<obj.x<<'\n';

    return 0;
}