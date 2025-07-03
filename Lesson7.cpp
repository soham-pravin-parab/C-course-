

#include <iostream>

namespace first{ 
    
    int age = 7;
}

namespace second {
    int age = 8;
}

int main()
{
    std::cout<<first::age;

    return 0;
}