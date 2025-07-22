
#include <iostream>
void printinfo(const std::string name ,const int age);
int main()
{
std::string name ="Soham parab";
int age = 15;

printinfo(name,age);

    return 0;
}

void printinfo(const std::string name , const int age){

name ="  ";
age = 0;
std::cout << name << std::endl;
std::cout<< age <<'\n';
}