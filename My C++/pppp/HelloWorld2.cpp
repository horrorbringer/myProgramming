#include<iostream>

void bakePizza();
void bakePizza(std::string tooping1);
void bakePizza(std::string tooping1,std::string tooping2);

int main(){
    bakePizza("pepperoni","mushroom");
    return 0;
}

void bakePizza(){
    std::cout<<"Here is your pizza!";
}
void bakePizza(std::string tooping1){
    std::cout<<"Here is your "<<tooping1<<" pizza\n";
}
void bakePizza(std::string tooping1 ,std::string tooping2){
    std::cout<<"Here is your "<<tooping1<<" and "<<tooping2<<" pizza\n";
}