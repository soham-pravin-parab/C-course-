
#include <iostream>
#include <algorithm>
int main()
{
   std::string s="abc";
   prev_permutation (s.begin(),s.end());
    std::cout<<s<<'\n';
    

    return 0;
}