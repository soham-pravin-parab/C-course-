
#include <iostream>
using namespace std;
int main()
{  int n=4;
  char chArr[]={'a','b','c','d'
  };
  for(int i=0;i<n;i++){
      for(int j=0;j<i;j++){
          std::cout<<" ";
      }
      for(int j=0;j<n-i;j++){
          std::cout<<chArr[i]<<" ";

      }
      std::cout<<endl;
  }
    
    return 0;
}