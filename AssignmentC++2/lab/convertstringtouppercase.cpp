#include <iostream>
#include <algorithm> 
#include <string>  

using namespace std;

int main()
{
    string input;
    cin >> input;

    transform(input.begin(), input.end(), input.begin(), ::toupper);

    cout << input;

    return 0;
}