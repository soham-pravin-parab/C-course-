
#include <iostream>
#include <string>
using namespace std;
void fun(){
    static int x=0;
    std::cout<<"x: "<<x<<'\n';
    x++;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}