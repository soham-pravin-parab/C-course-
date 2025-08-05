
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  pair<int ,pair<char,int>> p={1,{'a',15}};
  std::cout <<p.first<<" ";
  std::cout<<p.second.first;

    return 0;
}