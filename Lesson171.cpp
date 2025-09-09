
#include <iostream>
#include <string>
using namespace std;
class print{
    public:
    void show(int x){
        std::cout<<"int: "<<x;
    }
    void show(char y){
        std::cout<<"char: "<<y;
    }
};
int main()
{
    print p1;
    p1.show('&');
    
    return 0;
}