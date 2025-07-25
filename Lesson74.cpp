
#include <iostream>

class Human{
    public:
    std::string name;
    std::string occupation;
    int age;
    
    void eat(){
        std::cout << "This person is eating"  << std::endl;
    }
    void drink(){
        std::cout << "This person is drinking"  << std::endl;
    }
    void sleep(){
        std::cout << "This person is sleeping"  << std::endl;
    }
};

int main()
{
    Human human1;
    human1.name = "Soham parab ";
    human1.occupation = "student ";
    human1.age = 15 ;
        
    std::cout<<human1.name<<'\n';
        
    std::cout<<human1.occupation<<'\n';
        
    std::cout<<human1.age<<'\n';
    
    human1.eat();
    human1.drink();
    human1.sleep();




    return 0;
}