    #include <iostream>
    #include <string>

    class Employee {
    private:
        std::string name;
        int age;

    public:
        void getInfo() { 
            std::cout << "Enter employee name: ";
            std::getline(std::cin, name);
            std::cout << "Enter employee age: ";
            std::cin >> age;
            std::cin.ignore(); 
        }

        void displayInfo() {
            std::cout << "Name: " << name << ", Age: " << age << std::endl;
        }
    };

    int main() {
        Employee emp1;
        emp1.getInfo();
        emp1.displayInfo();
        return 0;
    }