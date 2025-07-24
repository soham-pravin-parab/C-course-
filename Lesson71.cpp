
#include <iostream>

template <typename T>
T max(T x,T y){
    return ( x > y ) ? x:y;
}

int main()
{
    std::cout<<max('3','4')<<'\n';

    return 0;
}