
#include <iostream>
using namespace std;
void changeArr (int arr[],int size){
    cout<<"in function \n";
    for(int i=0;i<size;i++){
        arr[i]=3*arr[i];
    }
}
int main()
{
    int arr[]={1 ,2 ,3};
    changeArr(arr,3);
    
    std::cout<<"in main\n";
    
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}