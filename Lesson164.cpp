
#include <iostream>
#include <string>
using namespace std;

class person {
public:
    int age;
    string name;
    
    person(string name, int age){
        this->name=name;
        this->age=age;
        
    }
};
class student:public person{
    public :
        int rollno;
        
    student(string name,int age,int rollno):person(name, age ){
        this->rollno=rollno;
    }
    
    void getinfo(){
            
    std::cout<<"name: "<<name<<'\n';
    
    std::cout<<"age: "<<age<<'\n';
    
    std::cout<<"rollno: "<<rollno<<'\n';

    }
};
int main()
{
    student s1("soham parab ", 15,123);
    
    s1.getinfo();

    return 0;
}