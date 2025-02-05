#include <iostream>
#include <cmath>
#include <math.h>

int main(){
    int n,i,sum=0;
    char p = 253;
    std::cout<<"1.Exercise\n";
    std::cout<<"1"<<p<<" + 2"<<p<<" + 3"<<p<<" + 4"<<p<<" + 5"<<p<<" +...+(2*n-1)"<<p<<std::endl;
    std::cout<<"Enter n: ";std::cin>>n;
    for(i = 1; i <= n; i++){
        std::cout<<(2*i-1)<<p<<" + ";
        sum+=pow((2*i-1),2);
    }
    std::cout<<"\b\b= "<<sum;
    return 0;
}