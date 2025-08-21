
#include <iostream>
#include <algorithm>
int main()
{
   std::string s="abc";
   next_permutation (s.begin(),s.end());
    std::cout<<s<<'\n';
    

    return 0;
}