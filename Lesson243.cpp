
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>&nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        
        int freq =1,ans=nums[0];
        for(int i =1;i<n;i++){
            if(nums[i]==nums[i-1]){
                freq++;
            } else {
                ans=nums[i];
                freq=1;
            }
            if(freq>n/2){
                return nums[i];
            }
        }
        return ans;
    }
    
};

int main()
{
    vector<int>nums={2,1,2,1,1};
    Solution sol;
    int result = sol.majorityElement(nums);
    cout<<"majority Element: "<<result;
    
    return 0;
}