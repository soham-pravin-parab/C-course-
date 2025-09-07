
#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
    string name;
};

class student:public Person{
    public :
        int rollno;
        
};

class teacher:public Person {
    public: 
    string subject;
    
    };
    class TA:public teacher {
    
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