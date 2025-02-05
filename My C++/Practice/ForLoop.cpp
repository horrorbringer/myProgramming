#include <iostream>
using namespace std;
int main()
{
    // int s = 0,n;
    // cout << "Enter loop: "; cin >> n;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << i << " ";
    //     s += i;

    //     // return 0;
    // }
    // cout << endl;
    // cout << "Loop total: " << s;

    // for(char l = 'a'; l <= 'z'; l++){
    //     cout << l << "  ";
    // }


    // for(int i = 1; i <= 100; i++) {
    //     cout << " B somtus <3 " << endl;
    // }

    int m;
    int F;
    cout << "!F = " ; cin >> m;
    for(int j = 1 ; j <= m ; j++) {
        cout << j << "x";
        
        F=j*m;
    }
    cout<< "\n!F = "<<F;
    return 0;
}