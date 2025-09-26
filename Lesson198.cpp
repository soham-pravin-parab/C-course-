
#include <iostream>
using namespace std;
int sumofdigits(int num){
    int digisum =0;
    while(num>0){
        int lastdigi = num %10;
        num /=10;
        digisum += lastdigi;
    }
    return digisum;
}
int main()
{
    std::cout<<"sum: "<<sumofdigits(2356);

    return 0;
}