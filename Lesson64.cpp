
#include <iostream>
void printinfo(std::string name ,int age);
int main()
{
std::string name ="Soham parab";
int age = 15;

printinfo(name,age);

    return 0;
}

void printinfo(std::string name , int age){

std::cout << name << std::endl;
std::cout<< age <<'\n';
}