
#include <iostream>
#include <vector> 
using namespace std;
void printDigits(int n){
    int count=0;
    
    while(n!=0){
        int digit =n%10;
        count++;
        
        n=n/10;
    }
    cout<<count <<endl;
    
}
int main()
{
    int n=3568;
    printDigits(n);
    
    return 0;
}