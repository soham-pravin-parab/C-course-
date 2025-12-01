
#include <iostream>
using namespace std;
int main()
{
    char str[100];
    
    std::cout<<"enter char array : ";
    cin.getline(str,100);
    for(char ch:str){
        cout<<ch<<" ";
    }
    cout<<endl;

    return 0;
}