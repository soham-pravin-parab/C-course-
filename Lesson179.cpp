
#include <iostream>
#include <string>
using namespace std;
class ABC{
    public:
    ABC(){
        std::cout<<"constructor"<<'\n';

    }
    ~ABC(){
        std::cout<<"destructor"<<'\n';

    }
};
int main()
{
    if(true){
     static ABC obj;
    }
    std::cout<<"End of main fnx\n";

    return 0;
}