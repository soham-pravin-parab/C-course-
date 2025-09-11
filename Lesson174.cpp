
#include <iostream>
#include <string>
using namespace std;
class parent{
    public:
    void getinfo(){
    std::cout<<"parent class"<<'\n';

    }
    virtual void hello (){
        std::cout<<"This is par"<<'\n';

    }
};
class child : public parent {
    public:
    void getinfo(){
    std::cout<<"child class"<<'\n';

    }
    void hello(){
        std::cout<<"This is child"<<'\n';

    }
};

int main()
{
  child c1;
  c1.hello();

    return 0;
}