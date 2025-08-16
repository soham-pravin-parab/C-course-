
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5]={1,3,2,5,8};
    
   std::sort(arr,arr+5);
    for(int val:arr){
    std::cout<<val<<" ";
}
    return 0;
}