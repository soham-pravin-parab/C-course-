
#include <iostream>
#include <string>
using namespace std;

class shape{
    virtual void draw()=0;
};
class circle:public shape{
    public:
    void draw(){
        std::cout<<"Drawing a circle"<<'\n';

    }
};

int main()
{
    circle c1;
    c1.draw();
    return 0;
}