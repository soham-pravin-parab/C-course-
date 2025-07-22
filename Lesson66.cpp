
#include <iostream>

int main()
{
    std::string name ="Soham parab";
    
    std::string *pName=&name;
    
    int age = 15;
    int *pAge=&age;
    
    std::cout << pName << std::endl;
    std::cout<<*pAge<<'\n';
    
    
    return 0;
}