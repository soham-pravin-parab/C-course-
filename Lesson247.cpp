
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>&prices){
        int maxProfit =0,bestbuy=prices[0],n=prices.size();
        
        for(int i=1;i<n;i++){
            if(prices[i]>bestbuy){
                maxProfit = max(maxProfit, prices[i]-bestbuy);
                
            }
            bestbuy = min(prices[i],bestbuy);
        }
        return maxProfit;
    }
};
int main()
{
    Solution sol;
    vector<int>prices={7,1,5,3,6,4};
    int result = sol.maxProfit(prices);
    cout<< "Max Profit = "<<result;
    
    return 0;
}