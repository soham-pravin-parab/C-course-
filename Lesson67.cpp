
#include <iostream>

int main()
{
    int *pointer=nullptr;
    int x =123;
    
    pointer=&x;
    
    if(pointer==nullptr){
        std::cout << "Value was not assigned!" << std::endl;
    }
    else{
        std::cout<<"Value was assinged !\n";
    }

    return 0;
}