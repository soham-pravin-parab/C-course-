
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int num[]={5,15,22,1,-15,24};
    int size =6;
    int index=0;
    int largest =INT_MIN;
    for (int i=0;i<size;i++){
        largest =max(num[i],largest);
    index =i;
    }
    cout<<"largest: "<<largest<<endl;
    cout<<"index: "<<index<<endl;
    
    return 0;
}