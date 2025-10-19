
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    
    cout<<"after push back size: "<<vec.size()<<endl;
    
   cout<<"capacity: "<<vec.capacity()<<endl;
    return 0;
}