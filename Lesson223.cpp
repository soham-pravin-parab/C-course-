
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int num[]={5,15,22,1,-12,-15,24};
    int size =7;
    int index =0;
    int smallest =INT_MAX;
    for (int i=0;i<size;i++){
        smallest =min(num[i],smallest);
        index=i;
    }
    cout<<"smallest: "<<smallest<<endl;
    cout<<"index :"<<index;
    
    return 0;
}