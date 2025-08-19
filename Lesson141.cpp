#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator(pair<int,int> p1, pair<int,int> p2){
    return p1.second < p2.second;
}

int main()
{
   vector<pair<int ,int>> vec={{1,3},{2,5},{8,1}};
    
   sort(vec.begin(), vec.end(), comparator);
   for(auto p : vec){
       cout << p.first << " " << p.second << '\n';
   }
   
   return 0;
}
