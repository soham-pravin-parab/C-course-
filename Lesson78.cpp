
#include <iostream>
class Animal {
    public:
    bool alive = true ;
    void eat(){
        std::cout<<"this animal is eating \n";
    }
};
class Dog : public Animal{
    public:
    void bark(){
        std::cout<<"The dog goes woof \n";
    }
};

int main()
{
    Dog dog;
        
    std::cout<<dog.alive<<'\n';
    dog.eat();
    dog.bark();


    return 0;
}