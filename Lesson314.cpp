
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& A){
        next_permutation(A.begin(),A.end()) ;
    }
};
int main()
{
    Solution sol;
    vector<int> nums={1,2,3,6,5};
    for(int x:nums){
        sol.nextPermutation(nums);
        cout<<x<<" ";
    }
    

    return 0;
}