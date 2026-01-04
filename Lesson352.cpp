
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int>find(vector<vector<int>>& grid){
    vector <int> ans;
    unordered_set<int> s;
    int n=grid.size();
    int a,b;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s.find(grid[i][j]) !=s.end()){
                ans.push_back(grid[i][j]);
                return ans;
                
            }
            s.insert(grid[i][j]);
        }
    }
    return ans;
}
int main()
{
    
 vector<vector <int>> grid={{1,5,3},{4,5,6},{7,8,9}};
 vector <int> res=find(grid);
 if(res.empty()){
     cout<<"no repeated value";
 }
 else{
     for(int val:res){
         cout<<val<<" ";
     }
 }
 
 
    

    return 0;
}