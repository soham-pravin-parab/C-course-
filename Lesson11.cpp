#include <iostream>

int main()
{
    int answer = 8 ;
    int questions =10;
    
    double score=   answer/(double) questions *100;
    char x ='%';
    std::cout<<score<<x;
    return 0;
}