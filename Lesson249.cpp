

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>&height){
        int maxWater =0;
        int lp=0,rp=height.size()-1;
        
        while(lp<rp){
            int w = rp-lp;
            int ht= min(height[lp],height[rp]);
            int currWater =w*ht;
            maxWater=max(maxWater,currWater);
            
            height[lp]>height[rp]? lp++:rp--;
        }
        return maxWater;
    }
};
int main()
{
    Solution sol;
    
    vector<int>height1={1,4,6,8,9,6 };
    cout<<"Max water container: "<<sol.maxArea(height1)<<endl;
    
    return 0;
}