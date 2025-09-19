
#include <iostream>
using namespace std;
int main()
{
    int n=4;
    int num=1;
    for(int i=0;i<n;i++){
        std::cout<<'\n';


        for(int j=i+1;j>0;j--){
            std::cout<< num;
            num++;
        }
    }
    std::cout<<endl;

    return 0;
}