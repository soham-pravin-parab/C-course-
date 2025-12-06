#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void sortColors (vector<int>& nums){
        int n=nums.size();
        int low=0 ,mid=0,high=0;
        
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low], nums[mid]);
                mid++;low++;
            } else if (nums [mid]==1){
                mid++;
            } else{
                swap(nums[high],nums[mid]);
                    high++;
                
            }
        }
    }
};
int main()
{
    Solution sol;
    vector <int> nums={1,0,2,1,1,2,0};
    sol.sortColors (nums);
    cout<<"output: ";
    for(int num:nums ){
    cout<<num<<" ";
}
    std::cout<<endl;

    return 0;
}