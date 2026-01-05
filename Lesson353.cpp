
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>&nums){
        unordered_set<int> s;
        
        for(int val: nums){
            if(s.find(val)!=s.end()){
                return val;
            }
            s.insert(val);
        }
        return -1;
    }
};
int main()
{
    Solution sol;
    vector <int>nums={1,2,3,4,5,4};
    std::cout<<sol.findDuplicate(nums);

    return 0;
}