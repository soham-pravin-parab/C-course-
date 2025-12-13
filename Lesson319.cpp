
#include <iostream>
#include <string>
using namespace std;
 
   string isPrime(int n){
       for(int i=2;i*i<=n;i++){
           if(n%i==0){
               return "NON PRIME";
           }
       }
       return "PRIME";
   }
   
int main()
{
    int n=47;
    
    std::cout<<isPrime(n);

    return 0;
}