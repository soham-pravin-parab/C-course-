    #include <iostream>
    #include <string>

    class Employee {
    private:
        std::string name;
        std::string job ;
        int age;
        
    public:
        
        Employee (std::string name,std::string job ,int age){
        this->name=name;
        this->job =job ;
        this->age=age;}
        
        Employee (Employee &orgobj){
            std::cout<<"This is a coustom copy constructor...\n";
            this->name=orgobj.name;
            this->job  =orgobj.job  ;
            this->age =orgobj.age;
        }
        
        
        void getInfo() {
            std::cout << "Name: " << name << ", Age: " << age <<", Job:"<<job << std::endl;
        }
    };

    int main() {
        Employee emp1("Soham parab","coder",15);
        Employee emp2(emp1);
        emp2.getInfo();
        
        return 0;
    }