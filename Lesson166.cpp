
#include <iostream>
#include <string>
using namespace std;


class student{
    public :
        int rollno;
        string name;
    
};

class teacher {
    public: 
    string subject;
    double salary;
    };
    
    class TA:public student,public teacher {
    
};
int main()
{
    TA t1;
    t1.name="Soham parab";
    t1.subject="Quantum physics ";
    std::cout<<t1.name<<'\n';
    std::cout<<t1.subject<<'\n';

    
    

    return 0;
}