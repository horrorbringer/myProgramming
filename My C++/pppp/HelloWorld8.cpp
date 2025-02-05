#include<iostream>
using namespace std;

int main(){

    // string students[]= {"Sary", "Dary"};
    char grade[]={'A', 'B', 'C', 'D', 'E', 'F'};

    for(int i=0;i<sizeof(grade)/sizeof(char);i++){
        cout<<grade[i]<<endl;
    }

    return 0;
}