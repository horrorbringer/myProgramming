#include <iostream>
using namespace std;

int main() {
    int list[5] = {1,2,3,4,5};
    for(int i : list){
        cout << i <<endl;
    }
    return 0;
}