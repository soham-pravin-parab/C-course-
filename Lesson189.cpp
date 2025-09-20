
#include <iostream>
using namespace std;
int main()
{
    int n=4;
    char chArr[]={'a','b','c','d'
    };
    for (int i=0;i<n;i++){
        std::cout<<'\n';

        for (int j=i+1;j>0;j--){
           std::cout<<chArr[j-1];
 
        }
    }
    return 0;
}