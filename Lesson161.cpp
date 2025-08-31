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
        *cgpaPtr = *(obj.cgpaPtr);
    }
    ~student(){
        std::cout<<"Hi,I delete everything ";
        delete cgpaPtr;
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

    
    s2.getinfo();

    return 0;
}
