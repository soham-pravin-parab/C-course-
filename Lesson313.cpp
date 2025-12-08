
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& A){
        int pivot =-1,n=A.size();
        
        for(int i=n-2;i>=0;i--){
            if(A[i]<A[i+1]){
                pivot=1;
                break;
            }
            
            
        }
        if(pivot==-1){
            reverse(A.begin(),A.end());
            return;
        }
        
        for(int i=n-1;i>pivot;i--){
            if(A[i]>A[pivot]){
                swap(A[i],A[pivot]);
                break;
            }
        }
        int i=pivot+1,j=n-1;
        while(i<=j){
            swap(A[i++],A[j--]);
        }
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