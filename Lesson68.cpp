
#include <iostream>

int main()
{
    int *pNum= NULL;
    
    pNum = new int ;
    
    *pNum = 15;
    
    std::cout << "address" <<pNum<< std::endl;
    std::cout << "number "  <<*pNum<<'\n';
    
    return 0;
}