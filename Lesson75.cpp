
#include <iostream>
class Student{
    public:
       std::string name ;
       int age ;
       double gpa;
    
    Student(std::string name,int x,double y){
        this->name=name;
        age=x;
        gpa=y;
    }
};

int main()
{
    Student student1("Soham",15, 3.8);
        
    std::cout<<student1.name<<'\n';
        
    std::cout<<student1.age<<'\n';
        
    std::cout<<student1.gpa<<'\n';




    return 0;
}