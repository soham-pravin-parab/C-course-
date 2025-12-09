
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s,string part){
        while(s.length()>0&& s.find(part) <s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    } 
};
int main()
{
    Solution sol;
    string s="daaabcabcccabcd";
    string part="abc";
    std::cout<<sol.removeOccurrences(s,part);

    return 0;
}