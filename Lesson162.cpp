
#include <iostream>
#include <string>
using namespace std;

class person {
public:
    int age;
    string name;
    
    person(){
        
    }
};
class student:public person{
    public :
        int rollno;
    
    void getinfo(){
            
    std::cout<<"name: "<<name<<'\n';
    
    std::cout<<"age: "<<age<<'\n';
    
    std::cout<<"rollno: "<<rollno<<'\n';

    }
};
int main()
{
    student s1;
    s1.name="soham parab";
    s1.age=15;
    s1.rollno=123;
    s1.getinfo();

    return 0;
}