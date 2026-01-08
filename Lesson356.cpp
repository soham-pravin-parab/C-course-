
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector <vector<int>> threeSum(vector<int>&nums){
        int n=nums.size();
        
        set<vector<int>>uniqueTriplets ;
        
        for(int i=0;i<n;i++){
            int tar= -nums[i];
            set<int>s;
        
        for(int j=i+1;j<n;j++){
            int third=tar-nums[j];
            if(s.find(third)!=s.end()){
                vector<int> trip ={nums[i],nums[j],third};
                sort(trip. begin(),trip.end()); 
                uniqueTriplets.insert(trip);
            }
            s.insert(nums[j]);
        }
        }
    vector <vector<int>>ans(uniqueTriplets.begin(),uniqueTriplets.end());
    return ans;
        
    }
};
int main()
{
    
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = sol.threeSum(nums);
    for (const auto& trip : result) {
        cout << "[";
        for (int val : trip) cout << val << " ";
        cout << "]" << endl;
    }
    
    return 0;
}