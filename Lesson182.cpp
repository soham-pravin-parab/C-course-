
#include <iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++){
        std::cout<<'\n';

        for(int j=0;j<i+1;j++){
            std::cout<< i+1;
        }
    }
    std::cout<<endl;

    return 0;
}