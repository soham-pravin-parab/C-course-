
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str="soham parab";
    int st=0,end=str.size()-1;
    while(st<end){
        std::swap(str[st++],str[end--]);
    }
    cout<<str<<endl;

    return 0;
}