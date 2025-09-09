
#include <iostream>
#include <string>
using namespace std;
class Student{
    public:

    string name;
    Student(){
        std::cout<<"non-parameterized\n ";
    }
    Student(string name){
        this->name=name;
    }
};
int main()
{
    Student s1;
    
    return 0;
}