
#include <iostream>
using namespace std;
int decToBinary(int decnum){
    int ans =0; int power =1;
    
    while(decnum>0){
        int rem =decnum%2;
        decnum /= 2;
        ans+=(rem*power);
        power *= 10;
    }
    return ans;
} 
int main()
{
    int decnum=50;
    
    std::cout<<decToBinary(decnum);

    return 0;
}