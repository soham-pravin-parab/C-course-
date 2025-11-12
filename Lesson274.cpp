#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& A, int tar) {
        int st = 0, end = (int)A.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (A[mid] == tar) {
                return mid;
            }

            if (A[st] <= A[mid]) {
                if (A[st] <= tar && tar < A[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else { 
                if (A[mid] < tar && tar <= A[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }

        return -1; 
    }
};

int main() {
    Solution sol;
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2}; // rotated array
    int target = 0;
    
    cout << "Index of " << target << " in the array is: " << sol.search(arr, target) << endl;
    

    return 0;
}