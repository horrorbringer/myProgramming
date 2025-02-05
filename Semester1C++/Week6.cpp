#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\tValue (5.8)  = "<<static_cast<int>(5.8)<<endl;
    cout<<"\tValue (44.4) = "<static_cast<int>(44.4)<<endl;
    cout<<"\tValue (43)   = "<<static_cast<double>(43)<<endl;
    cout<<"\tValue (74)   = "<<static_cast<double>(73)<<endl;
    cout<<"\tValue (8+9)  = "<<static_cast<double>(8+9)<<endl;
    cout<<"\tValue (17)/2 = "<<static_cast<int>(17)/2<<endl;
    cout<<"\tValue (5/2)  = "<<static_cast<int>(5/2)<<endl;
    cout<<"\tValue (65)   = "<<static_cast<char>(65)<<endl;
    cout<<"\tValue (001)  = "<<static_cast<char>(001)<<endl;
    cout<<"\tValue (002)  = "<<static_cast<char>(002)<<endl;
    cout<<"\tValue (003)  = "<<static_cast<char>(003)<<endl;
    cout<<"\tValue (004)  = "<<static_cast<char>(004)<<endl;
    cout<<"\tValue (005)  = "<<static_cast<char>(005)<<endl;
    cout<<"\tValue ('A')  = "<<static_cast<int>('A')<<endl;
    cout<<"\tValue (65)   = "<<static_cast<char>(65)<<endl;
    cout<<"\tValue (56)   = "<<static_cast<double>(56)<<endl;
    return 0;
}