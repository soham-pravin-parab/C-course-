
#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int findDuplicate(vector<int>& arr){
        int slow =arr[0],fast=arr[0];
        do{
            slow=arr[slow];
            fast=arr[arr[fast]];
        } while(slow!=fast);
        
        slow=arr[0];
        while(slow!=fast){
            slow=arr[slow];
            fast=arr[fast];
        }
        return slow;
    }
};
int main()
{
    vector <int> nums={1,2,3,4,4};
    Solution sol;
    
    std::cout<<sol.findDuplicate(nums);

    return 0;
}