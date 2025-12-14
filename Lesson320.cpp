
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    int countPrimes(int n){
        vector<bool> isPrime(n+1,true );
        int count =0;
        
        for(int i=2;i<n;i++){
            if(isPrime[i]){
                count++;
                
                for(int j=i*2;j<n;j=j+1){
                    isPrime[j]= false;
                }
            }
        }
        return count;
    }
    
};
int main()
{
    Solution sol;
    vector <int>testcase={1,2,4,3,5,6 ,7,8,9};
    for(int x:testcase ){
    cout<<sol.countPrimes(x)<<" ";
    }
    return 0;
}