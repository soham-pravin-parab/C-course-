#include <iostream>
#include <string>

using namespace std;

class student{
    public:
    string name;
    double* cgpaPtr;


    student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    student(const student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        this->cgpaPtr = obj.cgpaPtr;
    }
    
    void getinfo(){
        cout << "name: " << name;
        cout << ", cgpa: " << *cgpaPtr << endl;
    }
};

int main()
{
    student s1("Soham parab", 9.8);
    student s2(s1);

    
    s1.getinfo();
    *(s2.cgpaPtr)=9.5;
    s1.getinfo();
    

    return 0;
}
