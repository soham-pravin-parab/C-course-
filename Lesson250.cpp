#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int>productExceptself(vector<int>& nums){
    
    int n= nums.size();
    vector<int> ans(n ,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i !=j){
                ans[i]*= nums[j];
            }
        }
    }
    return ans;
    }
    
};
int main()
{
    Solution sol;
    vector<int> nums ={1,2,3,4};
    vector<int> result=sol.productExceptself(nums);
    
    for(int val:result){
        cout<<val<<" ";
        
    }
    cout<<endl;
    
    
    return 0;
}