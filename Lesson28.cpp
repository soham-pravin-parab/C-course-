


#include <iostream>

int main()
{
  std::string name;
 
  std::cout<<"Enter your name ";
  std::getline(std::cin,name);
  
  name.append("@gmail.com");
  std::cout<<"Your user id is "<<name;

    return 0;
}