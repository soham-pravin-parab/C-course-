
#include <iostream>

 class Stove {
    private:
        int temperature =0;
    public:
        
        int gettemprature(){
            return temperature;
        }  
        void settemprature(int temperature ){
            if(temperature < 0){
                this->temperature =0;
            }
            else if (temperature >= 10){
                this->temperature =10;
            }
            else {
                this->temperature =temperature;
            }
        }
    
    
 };

int main()
{
    Stove stove;
    
    stove.settemprature(-5);
    
    
        
    std::cout<<stove.gettemprature()<<'\n';


    return 0;
}