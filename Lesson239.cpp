
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
  int maxSubarray(vector<int>& nums){
      int currSum =0, maxSum = INT_MIN;
      
      for(int val :nums){
          currSum += val;
          maxSum = max(currSum,maxSum);
          
          if(currSum<0){
              currSum =0;
          }
      }
     return maxSum;
  }
  
};
int main()
{
    vector<int> nums={-2,4,-6,7,8,-9,5,7,8 };
    Solution obj;
    cout<<obj.maxSubarray(nums);
    
    
    return 0;
}