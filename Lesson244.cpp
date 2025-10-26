
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>&nums) {
        int freq=0,ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(freq==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }
            else{
                freq--;
            }
           
        } return ans;
    }   
};

int main()
{
    vector<int>nums={2,1,2,1,2};
    Solution sol;
    int result = sol.majorityElement(nums);
    cout<<"majority Element: "<<result;
    
    return 0;
}