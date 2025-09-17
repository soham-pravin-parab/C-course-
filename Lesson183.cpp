
#include <iostream>
using namespace std;
int main()
{
    int n=4;
    char chArr[]={'a','b','c' ,'d'
    };
    for(int i=0;i<n;i++){
        std::cout<<'\n';

        for(int j=0;j<i+1;j++){
            std::cout<< chArr[i];
        }
    }
    std::cout<<endl;

    return 0;
}