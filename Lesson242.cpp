
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>&nums) {
        int n= nums.size();
        for(int val:nums){
            int freq =0;
            for(int el:nums){
                if(el==val){
                    freq++;
                }
            }
            if(freq>n/2){
                return val;
            }
        }
        return -1;
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