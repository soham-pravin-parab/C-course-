
#include <iostream>

int main()
{
    char grades[]= { 'A','B','C','D','F' };
    
    std::cout<<sizeof(grades)/sizeof(char)<<" elements ";

    return 0;
}