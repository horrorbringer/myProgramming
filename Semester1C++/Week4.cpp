#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int A = 10;
    int B = 10;
    cout << fixed<<showpoint<<setprecision(3);
    cout << "\tValue 50 + 500 = "<<50+500<<endl;
    cout << "\tValue 100 - 10 = "<<100-10<<endl;
    cout << "\tValue 80/2     = "<<80/2<<endl;
    cout << "\tValue 20 * 10  = "<<20*20<<endl;
    cout << "\tValue 50 % 3   = "<<50%2<<endl;
    cout << "\tValue 10 + 20 *3 -5 / 2  ="<<10+20*3-5/2<<endl;
    cout << "\tValue (50*20-50)*(100-10/2) = "<<(50*20-50)*(100-10/2);
    A++;
    B--;
    cout << "\tValue          = "<<A<<endl;
    cout << "\tValue          = "<<B<<endl;
    return 0;
}