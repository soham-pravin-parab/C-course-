#include <iostream>
#include <string>

void swap(std::string &x, std::string &y);

int main()
{
    std::string x = "Kool-Aid";
    std::string y = "water";

    swap(x, y);  

    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;

    return 0;
}


void swap(std::string &x, std::string &y) {
    std::string temp = x;
    x = y;
    y = temp;
}
