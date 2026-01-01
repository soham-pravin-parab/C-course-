
#include <iostream>
using namespace std;
#include <vector>
class Solution {
public:
    bool searchMatrix (vector <vector<int>>& mat , int target){
        int m=mat.size(),n=mat[0].size();
        
        int r=0,c=n-1;
        while(r<m && c>=0){
            if(target==mat[r][c]){
                return true;
            } else if(target<mat[r][c]){
                c--;
            } else{
                r++; 
            }
        }
        return false;
    }
    
};
int main()
{
    Solution sol;
    vector<vector<int>>mat={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int target =5;
    
    std::cout<<sol.searchMatrix(mat,target);

    return 0;
}