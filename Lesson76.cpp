
#include <iostream>

class pizza{
    public:
      std::string topping1;
      std::string topping2;
      
    pizza(std::string x,std::string y){
        topping1=x;
        topping2=y;
    }
    pizza (std::string a){
        topping1=a;
    }
    pizza(){
        
    }
};

int main()
{
   pizza pizza1 ("peperoni","olives");
   
   std::cout << pizza1.topping1 << std::endl;
       
    std::cout<<pizza1.topping2<<'\n';
    
    
    pizza pizza2 ("bell pepper ");
        
    std::cout<<pizza2.topping1<<'\n';
    
    pizza pizza3 ();
        
    std::cout<<pizza3<<'\n';


     
    return 0;
}