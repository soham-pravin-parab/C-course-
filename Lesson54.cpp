
#include <iostream>
int searchArray(int array[],int size,int element);
int main()
{
   int numbers []={1,2,3,4,5,6,7,8,9,10};
   int size = sizeof(numbers)/sizeof(numbers[0]);
   int index;
   int Mynum;
   
   std::cout << "Enter the element to search:" << std::endl;
   std::cin>>Mynum;
   
   index=searchArray(numbers , size, Mynum );
   
   if(index !=-1){
       std::cout<<"is at index "<<index;
   }
   else{
       std::cout<<Mynum<<" is not in array";
   }

    return 0;
}
int searchArray(int array[],int size,int element){
    for(int i=0;i<size;i++){
    if(array[i]== element){
        return i ;
    }
    
    }
    
    return -1 ;
    
    }