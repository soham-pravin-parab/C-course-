
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int peakInMountainArray( vector<int>&A){
        int st=1,end=A.size()-2;
        while(st<=end){
            int mid =st+(end-st)/2;
            if(A[mid-1]<A[mid]&&A[mid]>A[mid+1]){
                return mid;
            }
            else if(A[mid-1]<A[mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    };
};
int main()
{
    Solution sol;
    
    vector <int> testcase = {1,3,9,5,6,7,8};
    int peak = sol.peakInMountainArray(testcase);
    cout<<"Peak index : "<<peak;
    
    
    return 0;
}