#include <iostream>

class Stove{
    private:
    int temperature = 0;
    public:

    int getTemperature(){
        return temperature;
    }
    void setTemperature(int temperature){
        this->temperature = temperature;
    }
};
int main()
{
    // Astraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

    Stove stove;
    
    stove.setTemperature(1000);
    
    std::cout << stove.getTemperature();

    return 0;
}