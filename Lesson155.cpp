    #include <iostream>
    #include <string>

    class Employee {
    private:
        std::string name;
        int age;

    public:
        
        Employee (std::string name ,int age){
        this->name=name;
        this->age=age;}
        void getInfo() {
            std::cout << "Name: " << name << ", Age: " << age << std::endl;
        }
    };

    int main() {
        Employee emp1("Soham parab",15);
        Employee emp2(emp1);
        emp2.getInfo();
        
        return 0;
    }