
#include <iostream>
using namespace std;
class Solution {
public:
    double myPow(double x,int n) {
        long binform =n;
        if(n<0){
            x=1/x;
            binform=-binform;
        }
        double ans =1;
        while(binform>0){
            if(binform%2==1){
                ans *=x;
                
            }
            x *=x;
            binform/=2;
        }
        return ans;
    }
  
    
};
int main()
{
    Solution sol;
    cout<<"2^10 = "<<sol.myPow(2,10)<<endl;
    cout<<"2^-2 = "<<sol.myPow(2,-2)<<endl;
    
    
    return 0;
}