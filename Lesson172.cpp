
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
  parent p1;
  p1.getinfo();

    return 0;
}