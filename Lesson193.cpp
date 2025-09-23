
#include <iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
        std::cout<<" ";}
    
    std::cout<<"*";
    if(i !=0){
        for(int j=0;j<2*i-1;j++){
            std::cout<<" ";
        }
        std::cout<<"*";
    }
    std::cout<<endl;
    }
    return 0;
}