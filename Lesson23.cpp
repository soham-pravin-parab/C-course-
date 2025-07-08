
#include <iostream>

int main()
{
   int marks ;
   
   std::cout<<"What are your marks ";
   std::cin>>marks;
   
   if(marks<=0||marks<=40){
       std::cout<<"You scored very less";
      
   }

    else{
        std::cout<<"You did great  ";
    }
    return 0;
}