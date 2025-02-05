#include<iostream>
using namespace std;
void funtion(int a , int b ,int c)
{
    int total;
    total = (a + b)*c;
    cout<<"total = "<<total<<endl;
}
int main ()
{
    funtion(2,3,2);
    funtion(5,5,2);
    funtion(9,9,2);
}