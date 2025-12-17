
#include <iostream>
using namespace std;
bool Armstrong(int n){
    int copyN = n;
    int sumOfcubes = 0;
    
    while(n !=0){
        int dig = n%10;
        sumOfcubes += (dig*dig*dig );
        
        n= n/10;
    }
    return sumOfcubes== copyN;
}
int main()
{
    int n=153;
    
    if(Armstrong(n)){
        cout<<"is Armstrong number\n";
    }
    else{
        cout<<"is not Armstrong \n";
    }
    
    

    return 0;
}