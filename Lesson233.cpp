
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>vec;
    cout <<"size: "<<vec.size()<<endl;
    vec.push_back(25);
    cout<<"after push back size: "<<vec.size()<<endl;
    
   cout<<vec.front()<<endl;
    return 0;
}