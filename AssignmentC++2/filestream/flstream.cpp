#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream writeData("data_01.txt",ios::app);
    for(int i = 1; i < 10; i++){
        writeData<<"\nThis is filestream!";
    }

    return 0;
}