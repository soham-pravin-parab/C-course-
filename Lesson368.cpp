
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>&nums, int tar){
        vector<vector<int>> ans;
        int n= nums.size();
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int p =j+1,q=n-1;
                while(p<q){
                    long long sum =(long long)nums[i]+(long long)nums[j]
                    +(long long)nums[p]+(long long)nums[q];
                    
                    if(sum<tar){
                        p++;
                    } else if(sum>tar){
                        q--;
                    } else {
                        ans.push_back ({nums[i]+nums[j]+nums[p]+nums[q]});
                        p++;q--;
                    }
                    
                }
                j++;
                while(j<n && nums[j]== nums[j-1]) j++;
            }
        }
        return ans;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {2, 3, 4, 1};
    int target = 10;
    
    auto result = sol.fourSum(nums, target);
    
    if (result.size() == 1 && result[0] == vector<int>{1,2,3,4}) {
        cout << "PASS: Found [1,2,3,4]";
    } else {
        cout << "FAIL";
    }
    return 0;
}