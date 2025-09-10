
#include <iostream>
#include <string>
using namespace std;
class parent{
    public:
    void getinfo(){
    std::cout<<"parent class"<<'\n';

    }
};
class child : public parent {
    public:
    void getinfo(){
    std::cout<<"child class"<<'\n';

    }
};
int main()
{
  child c1;
  c1.getinfo();

    return 0;
}