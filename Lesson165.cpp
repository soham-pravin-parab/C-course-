
#include <iostream>
#include <string>
using namespace std;

class person {
public:
    int age;
    string name;
    
    
};
class student:public person{
    public :
        int rollno;
        
    
};
class Gradstudent:public student {
    public:
    string researchArea;
};
int main()
{
    Gradstudent s1;
    s1.name="Soham parab";
    s1.researchArea="Quantum physics ";
    std::cout<<s1.name<<'\n';
    std::cout<<s1.researchArea<<'\n';

    
    

    return 0;
}