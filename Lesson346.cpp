
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchInRow(vector<vector<int>>& mat,int target,int row){
        int n=mat[0].size();
        int st=0,end=n-1;
        
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==mat[row][mid]){
                return true;
            } else if(target >mat[row][mid]){
                st=mid+1;
            }
            else {
                end=mid-1;
            }
            
        }
        return false;
    }
};
int main()
{
    Solution sol;
   vector<vector<int>>mat={{1,2, 3,4},{5,6,7,8},{9,10,11,12}};
    int target =8;
    int row=1;
    std::cout<<sol.searchInRow(mat,target,row);

    return 0;
}