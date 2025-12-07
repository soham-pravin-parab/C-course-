
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isAlphanumeric(char ch){
        if((ch>=0&&ch<=9)||(tolower(ch)>='a'&&tolower(ch)<='z')){
            return true;
        }
        return false;
    }
    
    bool isPalindrome(string s){
        int st=0,end=s.length()-1;
        while(st<end){
            if(!isAlphanumeric(s[st])){
                st++;continue;
            }
            if(!isAlphanumeric(s[end])){
                end--;continue;
            }
            if(tolower(st)!=tolower(end)){
                return false ;
            }
            st++;end--;
        }
        return true;
    }
};
int main()
{
    Solution sol;
   cout<< sol.isPalindrome("racecar");
    return 0;
}