#include<iostream>
using namespace std;
float sum(int a , int b)
{
    return a + b;
}
double multi(int x , int y)
{
    return x * y;
}

int main ()
{
    float Sum,Multi;
    Sum = sum(5, 5);
    Multi = multi(4, 4);
    cout<<"Sum = "<<Sum<<endl;
    cout<<"Multi = "<<Multi<<endl;
    return 0;
}